/*************************************************************************
	> File Name: 121.c
	> Author: 
	> Mail: 
	> Created Time: Mon May  4 22:49:14 2020
 ************************************************************************/

#include<stdio.h>
void check(char a, char b){
    if((a == 'O' && b == 'Y') || 
       (a == 'Y' && b == 'H') ||
       (a == 'H' && b == 'O')){
        printf("MING\n");
    } else if(a == b) {
        printf("TIE\n");
    } else {
        printf("LI\n");
    }
}
int main(){
    char a, b;
    scanf("%s%s", &a, &b);
    check(a, b);
    return 0;
}
