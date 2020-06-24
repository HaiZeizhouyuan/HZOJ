/*************************************************************************
	> File Name: 184.c
	> Author: 
	> Mail: 
	> Created Time: Fri May  8 17:11:24 2020
 ************************************************************************/

#include<stdio.h>
int f(int x, int n){
    if (n == 1) return x;
    return f((x + 1) * 2, n - 1);
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n",f(1,n));
    return 0;
}
