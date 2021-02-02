/*************************************************************************
	> File Name: 330_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月02日 星期二 20时03分13秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
#define MAX_N 10000
long long c[2][MAX_N + 5];
#define lowbit(x)  (x & -x)
long long n, m;

void add_a_num(long long i, long long n, long long val, long long k) {
    while(i <= n) {
        c[k][i] += val;
        i += lowbit(i);
    }
    return ;
}

long long query(long long k, long long i) {
    long long sum = 0;
    while(i) {
        sum += c[k][i];
        i -= lowbit(i);
    }
    return sum;
}

long long get_sum(long long i) {
    return (i + 1) * query(0, i) - query(1, i);
}


void add(long long i, long long n, long long val) {
    add_a_num(i, n, val, 0);
    add_a_num(i, n, i * val, 1);
    return ;
}


void get_nums() {
    scanf("%lld%lld", &n, &m);
    long long pre = 0, cur;
    for (long long i = 1; i <= n; i++) {
        scanf("%lld", &cur);
        add(i, n, cur - pre);
        pre = cur;
    }
}

int main() {
    char opt[10];
    get_nums();
    for (long long i = 0; i < m; i++) {
        scanf("%s", opt);
        long long l, r, d;
        switch(opt[0]) {
            case 'C': {
                scanf("%lld%lld%lld", &l, &r, &d);
                add(l, n, d);
                add(r + 1, n, -d);
            } break;
            case 'Q' : {
                scanf("%lld%lld", &l, &r);
                printf("%lld\n", get_sum(r) - get_sum(l - 1));
            } break;
        }
    }
    return 0;
}
