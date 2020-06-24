/*************************************************************************
	> File Name: 136.c
	> Author: 
	> Mail: 
	> Created Time: Sat May  2 22:20:48 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i % 7 == 0){
            printf("%d\n", i);
        }
        
    }
    return 0;
}
