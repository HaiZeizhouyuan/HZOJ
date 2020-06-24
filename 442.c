/*************************************************************************
	> File Name: 442.c
	> Author: 
	> Mail: 
	> Created Time: Thu May 14 00:06:29 2020
 ************************************************************************/

#include<stdio.h> 
int check(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    else return check(n -1) + check(n - 2);
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++) {
        printf("%d",check(i));
        (i - n) && printf(" ");

    }
    printf("\n");
}
