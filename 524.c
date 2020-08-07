/*************************************************************************
	> File Name: 524.c
	> Author: 
	> Mail: 
	> Created Time: Wed Aug  5 20:34:06 2020
 ************************************************************************/

#include<stdio.h>

int main () {
    int n, x, y, k = 1;
    int num[n + 5][n + 5];
    scanf("%d%d%d", &n, &x, &y);
    int i = 0, j = 0;
    while (i < n) {
        while (j < n) {
            num[i][j] = k++;
        }
    }
    return 0;
}
