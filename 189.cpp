/*************************************************************************
	> File Name: 189.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May 15 00:42:30 2020
 ************************************************************************/

#include<stdio.h>
#define max_n 1000000
inline long long check(long long *arr, long long x, long long first, long long last) {
    long long mid;
    mid = (first + last) >> 1;
    if(first > last) return 0; 
    if (x ==  arr[mid]) return mid;
    if (x < arr[mid]) last = mid - 1;
    else first = mid + 1;
    return check(arr, x, first, last);
}
long long arr[max_n + 5];
long long num[max_n + 5];
int main(){
    long long n, k;
    scanf("%lld%lld", &n, &k);
    for (long long i = 1; i < n + 1; i++) {
        scanf("%lld", &arr[i]);
    }
   // long long num[k + 5];
    for (long long i = 0; i < k; i++ ) {
        scanf("%lld", &num[i]);
    }
    for (long long i = 0; i < k; i++) {
        printf("%lld", check(arr, num[i], 1, n));
        (i - k + 1) && printf(" ");
    }
    printf("\n");
    return 0;
}
