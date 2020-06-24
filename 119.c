/*************************************************************************
	> File Name: 119.c
	> Author: 
	> Mail: 
	> Created Time: Mon May  4 20:08:09 2020
 ************************************************************************/

#include<stdio.h>
int check(int y, int m, int d) {
    char arr[17] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0){
        arr[2] = 29;
    }
    if(m == 1){
        if (d == 1) {
            printf("%d %d %d\n%d %d %d\n", y - 1, 12, 31, y, m, d + 1);
       }else{
            printf("%d %d %d\n%d %d %d\n", y, m, d - 1, y, m, d + 1);
       }
    }else if (m == 12) {
        if(d == 31){
            printf("%d %d %d\n%d %d %d\n", y, m, d - 1, y + 1, 1, 1);       
        }else{
            printf("%d %d %d\n%d %d %d\n", y, m, d - 1, y, m, d + 1);                          
        }         
    }else{
        if(d == arr[m]){
            printf("%d %d %d\n%d %d %d\n", y, m, d - 1, y, m + 1, 1);  
        }else if (d == 1){
            printf("%d %d %d\n%d %d %d\n", y, m - 1, arr[m - 1] , y, m, d + 1);  
        }else{
            printf("%d %d %d\n%d %d %d\n", y, m, d - 1, y, m, d + 1);  
        }
    }
}
int main(){
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    check(y, m, d);
    return 0;
}
