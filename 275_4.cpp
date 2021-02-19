/*************************************************************************
	> File Name: 275_4.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月04日 星期四 09时29分02秒
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
#define base 163

char s[MAX_N + 5];
long long inv[MAX_N + 5];
long long BASE[MAX_N + 5];
long long H[MAX_N + 5];

void set_inv() {
    inv[1] = 1;
    for (long long x = 2; x <= P; x++) {
        inv[x] = (-(P / x) * inv[P % x] % P + P) % P;
    }
    return ;
}

void set_base() {
    BASE[0] = 1;
    for (long long i = 1; i <= MAX_N; i++) {
        BASE[i] = (BASE[i - 1] * base) % P;
    }
}

inline void init() {
    set_inv();
    set_base();
}

void set_H() {
    H[0] = 0;
    for (long long i = 1; s[i]; i++) {
        H[i] = ((H[i - 1] + BASE[i] * (s[i] - 'a'))) % P;
    }
    return ;
}

long long getH(long long l, long long r) {
    return ((H[r] - H[l - 1]) % P * inv[BASE[l]] % P + P) % P;
}

long long isSame(long long i, long long j, long long n) {
    for (long long k = 0; k < n; k++) {
        if(s[i + k] - s[j + k]) return false;
    }
    return true;
}



int main() {
    init();
    scanf("%s", s + 1);
    set_H();
    long long m, l1, r1, l2, r2;
    scanf("%lld", &m);
    for (long long i = 0; i < m; i++) {
        scanf("%lld%lld%lld%lld", &l1, &r1, &l2, &r2);
        long long val1 = getH(l1, r1);
        long long val2 = getH(l2, r2);
        long long n1 = r1 - l1 + 1, n2 = r2 - l2 + 1;
        if (n1 - n2 || val1 - val2) {
            printf("No\n");
        } else {
            if(isSame(l1, l2, n1)) {
                printf("Yes\n");
            } else {
                printf("No\n");
            }
        }
    }
    
 
    return 0;
}
