/*************************************************************************
	> File Name: 447.c
	> Author: 
	> Mail: 
	> Created Time: Thu May 14 12:26:39 2020
 ************************************************************************/

#include<stdio.h>
int fun(int n){
    while (n) {
        if (n % 10 == 4 || n % 10 == 7) n /= 10; 
        else return 0;
    }
    return 1;
}
int check (int n) {
    for (int i = 1; i < n + 1; i++) {
        if(fun (i) == 1){
            if (n % i == 0) return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%s\n", check(n) ? "YES" : "NO");
    return 0;
}
