/*************************************************************************
	> File Name: 205.c
	> Author: 
	> Mail: 
	> Created Time: Thu May  7 00:22:31 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[n + 5][m + 5];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);

        }
    }
    for (int i = 0; i < n; i++) {
        double sum = 0;
        for (int j = 0; j < m; j++) {
            sum += arr[i][j];
        }
        printf("%.6lf\n", 1.0 * sum / m);
    }
    return 0;
}
