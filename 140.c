/*************************************************************************
	> File Name: 140.c
	> Author: 
	> Mail: 
	> Created Time: Sun May  3 00:41:31 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    char a = 'A';
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n - 1 - i; k ++){
            printf(" ");
        }
        for(int j = 0; j < 1 + 2 * i; j++){
            if(j < 2 * i) printf("%c", a);
            else printf("%c\n", a);
        }
        a++;
    }
    a = a - 2;
    for (int i = 0; i < n - 1 ; i++){
        for (int k = 0; k < 1 + i; k++){
            printf(" ");
        }
        for(int j = 0; j < 2 * (n - i)- 3; j++){
            if(j < 2 * (n - i) - 4) printf("%c", a);
            else printf("%c\n", a);
        }
        a--;
    }
    return 0;
}
