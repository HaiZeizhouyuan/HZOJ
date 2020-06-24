/*************************************************************************
	> File Name: 138.c
	> Author: 
	> Mail: 
	> Created Time: Sat May  2 23:31:50 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2 * (n - i); j++){
                printf("%s", "A");
        }
        printf("\n");
    }
    return 0;
}
