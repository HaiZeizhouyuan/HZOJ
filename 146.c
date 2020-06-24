/*************************************************************************
	> File Name: 146.c
	> Author: 
	> Mail: 
	> Created Time: Wed May  6 00:57:28 2020
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    char arr[55];
    scanf("%s", arr);
    for (int i; i <strlen(arr); i++){
        if (arr[i] == 'Z') {
            printf("%c", 'A');
        } else if (arr[i] == 'z') {
            printf("%c", 'a');
        } else if ('A'<= arr[i] && arr[i] <'z') {
            printf("%c",arr[i] + 1);
        } else {
            printf("%c",arr[i]);
        }
    }
    printf("\n");
    return 0;
}
