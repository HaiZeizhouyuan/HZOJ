/*************************************************************************
	> File Name: 137.c
	> Author: 
	> Mail: 
	> Created Time: Sat May  2 22:25:29 2020
 ************************************************************************/

#include<stdio.h>
int main() {
    char a = 'A';
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n - i; j++){
            if(j < n -i - 1){
                printf("%c", a);
            }else{
                printf("%c\n", a);
            }
            a++;
        }
    }
    return 0;
}
