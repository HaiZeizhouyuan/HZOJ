/*************************************************************************
	> File Name: 139.c
	> Author: 
	> Mail: 
	> Created Time: Sat May  2 23:53:25 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for(int k = 0; k < n - 1 - i; k++){
            printf(" ");
        }
        for(int j = 0; j < 2 + 2 * i; j++){
            printf("%s", "A");
        }
        printf("\n");
    }
    for(int i = 0; i < (n-1); i++){
        for(int k = 0; k < 1 + i; k++){
            printf(" ");
        }
        for(int j = 0; j < 2 * (n -1 - i); j++){
                printf("%s", "A");
        }
        printf("\n");
    }
    return 0;
}
