/*************************************************************************
	> File Name: 182.c
	> Author: 
	> Mail: 
	> Created Time: Fri May  1 21:12:18 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int n, i, m, max = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &m);
        if(m > max){
            max = m;
        }

    }
    printf("%d\n",max);
    return 0;
}
