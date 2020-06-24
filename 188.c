/*************************************************************************
	> File Name: 188.c
	> Author: 
	> Mail: 
	> Created Time: Thu May 14 18:00:12 2020
 ************************************************************************/

#include<stdio.h>
#define max_n 1000000

int num[max_n + 5] = {0};

void prime() {
    for (long long i = 2; i < max_n + 1; i++) {
    if (num[i]) continue;
        for (long long j = i * i; j < max_n + 1; j += i) {
            num[j] = 1;
        }
    }
    return ;
}
int main() {
    long long  n, m;
    scanf("%lld%lld", &n, &m);
    prime();
    for (long long  j = m; j < n + 1; j ++ ) {
        !num[j] && printf("%lld\n", j);
    }
    return 0;
}
