/*************************************************************************
	> File Name: 239.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年01月14日 星期四 20时07分56秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 100000
int c[MAX_N + 5];

#define lowbit(x) (x & -x)

void add(int i, int x, int n) {
    while(i <= n) {
        c[i] += x;
        i += lowbit(i);
    }
    return ;
}

int query(int i) {
    int sum = 0;
    while(i) {
        sum += c[i];
        i -= lowbit(i);
    }
    return sum;
}
int main() {
    int m, n, pre = 0, cur;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> cur;
        add(i, cur - pre, n);
        pre = cur;
    }
    cin >> m;
    string s;
    int l, r, x;
    for (int i = 0; i < m; i++) {
        cin >> s;
        switch(s[0]) {
            case 'C' : {
                cin >> l >> r >>x;
                add(l, x, n);
                add(r + 1, -x, n);
            }break;
            case 'Q': {
                cin >> x;
                cout << query(x) << endl;
            } break;
        }
    }
    return 0;
}
