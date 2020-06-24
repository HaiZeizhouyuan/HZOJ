/*************************************************************************
	> File Name: 112.c
	> Author: 
	> Mail: 
	> Created Time: Mon May  4 00:41:37 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    char x;
    scanf("%c", &x);
    switch(x){
        case 'a': printf("It is good\n"); break;
        case 'b': printf("OMG\n"); break;
        case 'c': printf("Yes!\n"); break;
        default : printf("No exit\n");
    }
    return 0;

}
