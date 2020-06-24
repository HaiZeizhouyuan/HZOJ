/*************************************************************************
	> File Name: 206.c
	> Author: 
	> Mail: 
	> Created Time: Thu May  7 00:36:43 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    double arr[n + 5][m + 5];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%lf", &arr[i][j]);
        }
    }
    for (int j = 0; j < m; j++) {
        double sum = 0;
        for (int i = n-1; i > -1; i--) {
            sum += arr[i][j];
        }
        printf("%g\n", sum);
    }
    return 0;
}
