/*************************************************************************
	> File Name: 330.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年01月14日 星期四 21时00分28秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

#define MAX_N 100000
long long c[2][MAX_N + 5];

#define lowbit(x) (x & -x)

void add(long long k, long long i, long long x, long long n) {
    while(i <= n) {
        c[k][i] += x;
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

long long S(long long i) {
    return (i + 1) * query(0, i) - query(1, i);
}

void modify(long long i, long long x, long long n) {
    add(0, i, x, n);
    add(1, i, i * x, n);
    return ;
}

int main() {
    long long n, m, cur, pre = 0;
    scanf("%lld%lld", &n, &m);
    for (long long i = 1, cur; i <= n; i++) {
        scanf("%lld", &cur);
        modify(i, cur - pre, n);
        pre = cur;
    }
    long long l, r, d;
    char s[10];
    for (long long i = 0; i < m; i++) {
        scanf("%s", s);
        switch(s[0]) {
            case 'C':{
                scanf("%lld%lld%lld", &l, &r, &d);
                modify(l, d, n);
                modify(r + 1, -d, n);
            } break;
            case 'Q':{
                scanf("%lld%lld", &l, &r);
                printf("%lld\n", S(r) - S(l - 1));
            }break;
        }

    }
 
    return 0;
}
