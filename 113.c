/*************************************************************************
	> File Name: 113.c
	> Author: 
	> Mail: 
	> Created Time: Sun May  3 19:21:22 2020
 ************************************************************************/

#include<stdio.h>
int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int get_days(int y, int m){
    if((y % 4 == 0 && y % 100) || ( y % 400 == 0)) month[2]+= 1;
    return month[m];
}
int main(){
    int y,m;
    scanf("%d%d", &y, &m);
    printf("%d\n", get_days(y,m));
    return 0;
}
