/*************************************************************************
	> File Name: 117.c
	> Author: 
	> Mail: 
	> Created Time: Sat May  2 19:43:26 2020
 ************************************************************************/

#include<stdio.h>
int check(int n){
    if ( n / 1000 > 0) {
        if(n / 1000 == n % 10 && n / 100 % 10 == n / 10 % 10) return 1;
        return 0;
    }else if( n / 100 > 0){
        if(n / 100 == n % 10) return 1;
        return 0;
    }else if(n / 10 > 0){
        if(n / 10 == n % 10) return 1;
        return 0;
    }else{
        return 1;
    }
}
    
int main() {
    int n;
    scanf("%d", &n);
    printf("%s\n", check(n) ? "YES" : "NO");
    return 0;
}
