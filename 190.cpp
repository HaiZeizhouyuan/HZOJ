/*************************************************************************
	> File Name: 190.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May 15 16:13:10 2020
 ************************************************************************/

#include<stdio.h>
#define max_n 8000000
long long prime[max_n + 5] = {0};
void init_prime (long long n) {
    for (long long i = 2; i * i < n + 1; i++) {
        if (prime[i]) continue;
        for (long long j = 2; i * j < n + 1; j++) {
            prime[i * j] = 1;
        }
    }
    return ;
}
long long check(long long n) {
    long long  num = 0;
    init_prime(n);
    for (long long i = 2; i * 2 <= n ; i++) (!prime[i]) && (!prime[n - i]) && (num++);
    return num;
}
int main(){
    long long n;
    scanf("%lld", &n);
    printf("%lld\n", check(n));
    return 0;
}

