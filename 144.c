/*************************************************************************
	> File Name: 144.c
	> Author: 
	> Mail: 
	> Created Time: Wed May  6 11:12:40 2020
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    char str[105];
    scanf("%s", str);
    int sum = 0;
    for(int i; i < strlen(str); i++) {
        if(str[i] == 'A') sum ++;
    }
    printf("%d\n", sum);
    return 0;
}
