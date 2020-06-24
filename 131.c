/*************************************************************************
	> File Name: 131.c
	> Author: 
	> Mail: 
	> Created Time: Sat May  2 21:16:56 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int max = 1, min = 10000, m;
    for(int i = 0; i < n; i++){
        scanf("%d", &m);
        if(m > max) max = m;
        if(m < min) min = m;
    }
    printf("%d\n",max - min );
    return 0;
}
