/*************************************************************************
	> File Name: 111.c
	> Author: 
	> Mail: 
	> Created Time: Sat May  2 20:29:07 2020
 ************************************************************************/

#include<stdio.h>
double check(int n){
    double k;
    k = 13 + (n - 3) * 2.3 + 1;
    if(n > 3) return k;
}
int main(){
    int n;
    scanf("%d", &n);
    if(n <= 3) printf("%d\n", 14);
    else printf("%.1f\n", check(n));
    return 0;
}
