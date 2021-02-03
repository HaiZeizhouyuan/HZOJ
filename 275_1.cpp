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

int H[MAX_N + 5];
int K[MAX_N + 5];//base的i次幂的值
int inv[MAX_N + 5];
char s[MAX_N + 5];

void init() {
    inv[0] = 1;
    for (int i = 2; i < P; i++) {
        inv[i] = ((-P / i) * inv[P % i] % P + P) % P;
    }
    K[0] = 1;
    for (int i = 1; i <= MAX_N; i++) {
        K[i] = (K[i - 1] * base) % P;
    }
    
    H[0] = 0;
    for (int i = 0; s[i]; i++) {
        H[i] = ((H[i - 1] + K[i] * s[i])) % P;
    }
    return ;
}

int getH(int l, int r) {
    return ((H[r] - H[l - 1]) % P * inv[K[l]] % P + P ) % P;
}

int is_same(int i, int j, int n) {
    for (int k = 0; k < n; k++) {
        if (s[k + i] - s[j + i]) return false;
    }
    return true;
}

int main() {
    scanf("%s", s + 1);
    int m, l1, l2, r1, r2;
    init();
    scanf("%lld", &m);
    for (long long i = 0; i < m; i++) {
        scanf("%lld%lld%lld%lld", &l1, &r1, &l2, &r2);
        
    }
    return 0;
}
