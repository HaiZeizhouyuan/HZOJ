/*************************************************************************
	> File Name: 467.c
	> Author: 
	> Mail: 
	> Created Time: Sat May  9 12:48:12 2020
 ************************************************************************/

#include<stdio.h>
long f(int n){
    if(n == 0) return 1;
    if(n == 1) return 1;
    return  n * f(n - 1);
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%ld\n", f(n));
    return 0;
}
