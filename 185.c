/*************************************************************************
	> File Name: 185.c
	> Author: 
	> Mail: 
	> Created Time: Fri May  8 19:04:21 2020
 ************************************************************************/

#include<stdio.h>
int f(int n){
    if (n == 1) return 1;
    if (n == 2) return 1;
    return f(n - 1) + f(n - 2);
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}

