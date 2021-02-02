/*************************************************************************
	> File Name: 329.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月02日 星期二 18时11分35秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 100000
#define lowbit(x) (x & -x)
int c[MAX_N + 5];
int n, m;
int nums[MAX_N + 5];
int add_a_num(int l, int n, int val) {
    while(l <= n) {
        c[l] += val;
        l += lowbit(l);
    }
}

int query(int ind) {
    int sum = 0;
    while(ind) {
        sum += c[ind];
        ind -= lowbit(ind);
    }
    return sum;
}

void read() {
    cin >> n;
    int cur, pre = 0;
    for (int i = 1 ; i <= n; i++) {
        cin >> cur;
        add_a_num(i, n, cur - pre);
        pre = cur;
    }
    return ;
}

int main() {
    read();
    cin >> m;
    char ope[10];
    int l, r, val, ind;
    for (int i = 0; i < m; i++) {
        cin >> ope;
        switch(ope[0]) {
            case 'C': {
                cin >> l >> r >> val;
                add_a_num(l, n, val);
                add_a_num(r + 1, n, -val);
            } break;
            case 'Q': {
                cin >> ind;
                cout << query(ind) << endl;
            } break;
        }
    }
    return 0;
}
