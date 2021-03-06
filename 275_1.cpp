/*************************************************************************
	> File Name: 275_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月03日 星期三 23时50分41秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 1000000
#define P 1000007
#define base 13

long long H[MAX_N + 5];
long long K[MAX_N + 5];//base的i次幂的值
long long inv[MAX_N + 5];
char s[MAX_N + 5];

void init() {
    inv[1] = 1;
    for (long long i = 2; i < P; i++) {
        inv[i] = ((-P / i) * inv[P % i] % P + P) % P;
    }
    K[0] = 1;
    for (long long i = 1; i <= MAX_N; i++) {
        K[i] = (K[i - 1] * base) % P;
    }
    
    H[0] = 0;
    for (long long i = 1; s[i]; i++) {
        H[i] = ((H[i - 1] + K[i] * (s[i] -  'a'))) % P;
    }
    return ;
}

long long getH(long long l, long long r) {
    return ((H[r] - H[l - 1]) % P * inv[K[l]] % P + P ) % P;
}

long long isSame(long long i, long long j, long long n) {
    for (long long k = 0; k < n; k++) {
        if (s[i + k] - s[j + k]) return false;
    }
    return true;
}

int main() {
    scanf("%s", s + 1);
    long long m, l1, l2, r1, r2;
    init();
    scanf("%lld", &m);
    for (long long i = 0; i < m; i++) {
        scanf("%lld%lld%lld%lld", &l1, &r1, &l2, &r2);
        long long val1 = getH(l1, r1);
        long long val2 = getH(l2, r2);
        long long n1 = r1 - l1 + 1, n2 = r2 - l2 + 1;
        if (n1 - n2 || val1 - val2) {
            printf("No\n");
        } else {
            if (isSame(l1, l2, n1)) {
                printf("Yes\n");
            } else {
                printf("No\n");
            }
        }
        
    }
    return 0;
}
