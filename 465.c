/*************************************************************************
	> File Name: 465.c
	> Author: 
	> Mail: 
	> Created Time: Sat May  9 10:33:49 2020
 ************************************************************************/

#include<stdio.h>
int fun(long long n, int k){
    if (k - 1) return fun(n/= 10 ,-- k);
    return n % 10;
}
int main(){
    long long n, k;
    scanf("%lld%lld", &n, &k);
    printf("%d\n", fun(n, k));
    return 0;
}
