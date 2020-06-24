/*************************************************************************
	> File Name: 204.c
	> Author: 
	> Mail: 
	> Created Time: Wed May  6 23:22:05 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int sum[n + 5][n + 5];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &sum[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            i == j && printf("%d\n",sum[i][j]);
        }
    }
    return 0;
}
