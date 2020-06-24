/*************************************************************************
	> File Name: 150.c
	> Author: 
	> Mail: 
	> Created Time: Wed May  6 23:46:54 2020
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
    for (int j = 0; j < m; j++) {
        for (int i = n - 1; i > -1; i--) {
            printf("%d", arr[i][j]);
            i != 0 && printf(" ");
        }
        printf("\n");
    }
    return 0;
}
