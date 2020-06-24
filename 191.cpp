/*************************************************************************
	> File Name: 191.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May 15 18:39:08 2020
 ************************************************************************/

#include<stdio.h>
#define max_n 8000000
long long arr[max_n + 5] = {0};
void prime(long long n) {
    for (long long i = 2; i < n + 1; i++) {
        if (arr[i]) continue;
        for (long long j = i * i; j < n + 1; j += i) {
            arr[j] = 1;
        }
    } 
    return ;
}
void check (long long l, long long r) {
    long long num = 0, maxd = 0, mind = r, d, maxa, maxb, mina, minb;
    prime(r);
    for (long long i = l; i < r + 1; i++) {
        if (arr[i] == 0) {
            arr[++arr[0]] = i;
            num ++;
            if (num > 1) {
                d = arr[num] - arr[num - 1];
                if (d > maxd) {
                    maxd = d;
                    maxa = arr[num - 1]; 
                    maxb = arr[num];
                }
                if (d < mind) {
                    mind = d; 
                    mina = arr[num - 1]; 
                    minb = arr[num];
                }
            }
        }
    }
    if (num == 1) printf("There are no adjacent primes.\n");
    else printf("%lld,%lld are closest, %lld,%lld are most distant.\n",mina , minb, maxa, maxb );
    return ;
}
int main(){
    long long l, r;
    scanf("%lld %lld", &l, &r);
    check(l, r);
    return 0;
}

