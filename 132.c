/*************************************************************************
	> File Name: 132.c
	> Author: 
	> Mail: 
	> Created Time: Sat May  2 21:35:37 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    long int n, m, sum = 1;;
    scanf("%ld", &n);
    for(int i = 0; i < n; i++){
        scanf("%ld", &m);
        sum *= m;
    }
    printf("%ld\n", sum);
    return 0;
}
