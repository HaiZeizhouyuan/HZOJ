/*************************************************************************
	> File Name: 523.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun Jul 19 15:04:07 2020
 ************************************************************************/

#include <stdio.h>

long long  func(long long mid, long long i) {
    return (mid + i) * (i - mid + 1) / 2;
}

void find(long long i, long long n, long long *flag) {
    long long l = 1, r = i, mid;
    while ((l <= r)) {
        mid = (l + r) >> 1;
        if (func(mid, i) == n) {
            *flag = 0;
            for (long long  j = mid; j <= i; j++){
                (j - mid) && printf(" ");
                printf("%lld", j);
            }
            printf("\n");
            return ;
        } else if (func(mid , i) < n) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    } 
    return ;
}

int main () {
    long long n, flag = 1;
    scanf("%lld", &n);
    for(long long i = 1; i <= n && flag; i++) {
        find(i, n, &flag);
    }
    return 0;
}
