/*************************************************************************
	> File Name: 275.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年01月19日 星期二 09时21分54秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 1000000
#define P 100007
#define base 13
#define k P / i
#define R (P) % i
int H[MAX_N + 5];//前缀和
int K[MAX_N + 5];
int inv[P + 5];
char s[MAX_N + 5];

void init() {
    inv[1] = 1;
    for (int i = 2; i < P; i++) {
        inv[i] = ((-(k) * inv[R]) % P + P) % P;
    }
    K[0] = 1;
    for (int i = 1; i <= MAX_N; i++) {
        K[i] = (K[i - 1] * base) % P; 
    }
    H[0] = 0;
    for (int i = 1; s[i]; i++) {
        H[i] = (H[i - 1] + K[i] * s[i]) % P;
    }
}

int getH(int l, int r) {
    return ((H[r] - H[l - 1]) % P * inv[K[l]] % P + P) % P;
}

int is_same(int i, int j, int n) {
    for (int a = 0; a < n; a++) {
        if (s[i + a] - s[j + a]) return false;
    }
    return true; 
}


int main() {
    scanf("%s", s + 1);
    int m, l1, l2, r1, r2;
    init();
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d%d%d%d", &l1, &r1, &l2, &r2);
        int val1 = getH(l1, r1);
        int val2 = getH(l2, r2);
        int n1 = r1 - l1 + 1, n2 = r2 - l2 + 1;
        if (val1 - val2) {
            printf("No\n");
        } else {
            if (is_same(l1, l2, n1)) {
                printf("Yes\n");
            }
        }
    }
 
    return 0;
}
