/*************************************************************************
	> File Name: 449.c
	> Author: 
	> Mail: 
	> Created Time: Thu May 14 16:08:41 2020
 ************************************************************************/

#include<stdio.h>
void yh(int n) {
    int a[25][25];
    for (int i = 0; i < n; i++) {
        a[i][0] = 1;
        a[i][i] = 1;
    }
    for (int i = 2; i < n; i++) {
        for (int j = 1; j < i; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("%d", a[i][j]);
            (j - i) && printf(" "); 
        }
        printf("\n");
    }
    
    return ;
}
int main() {
    int n;
    scanf("%d",&n);
    yh(n);
    return 0;
}
