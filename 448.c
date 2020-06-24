/*************************************************************************
	> File Name: 448.c
	> Author: 
	> Mail: 
	> Created Time: Wed May  6 23:08:39 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int num[105];
    for (int i = 0; i < n; i++) {
    scanf("%d", &num[i]);
    }
    int m, k = 0;
    scanf("%d", &m);
    for (int i = 0; i < n; i++) {
        if (num[i] == m) {
            k = i + 1;
        }
    }
    printf("%d\n", k);
    return 0;
}
