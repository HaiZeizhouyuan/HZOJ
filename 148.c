/*************************************************************************
	> File Name: 148.c
	> Author: 
	> Mail: 
	> Created Time: Wed May  6 02:09:53 2020
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    char str[55];
    scanf("%s", str);
    for (int i = strlen(str) - 1; i > -1; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
