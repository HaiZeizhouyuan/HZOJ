/*************************************************************************
	> File Name: 187.c
	> Author: 
	> Mail: 
	> Created Time: Sat May  9 00:19:49 2020
 ************************************************************************/

#include<stdio.h>
int f(int n){
    if(n == 1) return 1;
    return 2 * f(n - 1) + 1;
}
int num(int n){
    if(n == 1) return 1;
    return 2 * num(n - 1) + n;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%ld %ld\n", f(n), num(n));
    return 0;
}
