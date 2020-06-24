/*************************************************************************
	> File Name: 468.c
	> Author: 
	> Mail: 
	> Created Time: Sat May  9 12:55:00 2020
 ************************************************************************/

#include<stdio.h>
int gcd(int a, int b){
    return b ? gcd(b, a % b): a;
}
int main(){
    int m, n;
    scanf("%d%d", &m, &n);
    printf("%d\n", gcd(m, n));
    return 0;
}
