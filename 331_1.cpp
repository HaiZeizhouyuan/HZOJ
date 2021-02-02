/*************************************************************************
	> File Name: 331_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月02日 星期二 21时03分26秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 80000
#define lowbit(x) (x & -x)

int c[MAX_N + 5];
int n;
int nums[MAX_N + 5];
int node[MAX_N+ 5];
void add_a_num(int i, int n, int val) {
    while(i <= n) {
        c[i] += val;
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


void read() {
    cin >> n;
    nums[1] = 0;
    for (int i = 2; i <= n; i++) {
        cin >> nums[i];
    }
    for (int i = 1; i <= n; i++) {
        add_a_num(i, n, 1);
    }
    return ;
}

int binary_search(int val) {
    int l = 1, r = n;
    while(l < r) {
        int mid = (l + r) >> 1;
        if (query(mid) < val) l = mid + 1;
        else r = mid;
    }
    return l;
}


void get_node() {
    for (int i = n; i >= 1; i--) {
        node[i] = binary_search(nums[i] + 1);
        add_a_num(node[i], n, -1);
    }  
}

int main() {
    read();
    get_node();
    for (int i = 1; i <= n; i++) {
        cout << node[i] << endl;
    }   
    return 0;
}
