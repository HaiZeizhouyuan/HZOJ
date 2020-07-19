/*************************************************************************
	> File Name: 521.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun Jul 19 09:44:16 2020
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define max_n 30
#define max_m 3000000

int prime[max_m + 5] = {0};
int isprime[max_m + 5] = {1, 1};
int num[max_n + 5];
int n, r, ans = 0;
void is_prime() {
    for (int i = 2; i <= max_m; i++) {
        if (!isprime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > max_m) break;
            isprime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

void func (int q, int deep, int sum) {
    if (deep == r) {
        if (isprime[sum] == 0) ans += 1;
        return ;
    }
    for (int i = q; i <= n - r + deep; i++) {
            sum += num[i];
            func(i + 1, deep + 1, sum);
            sum -= num[i];
    }
    return ;
}

int main () {
    is_prime();
    scanf("%d %d", &n, &r);
    for (int i = 0; i < n; i++) scanf("%d", num + i);
    func(0, 0, 0);
    printf("%d\n", ans);
    return 0;
}
