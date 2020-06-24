/*************************************************************************
	> File Name: 115.c
	> Author: 
	> Mail: 
	> Created Time: Mon May  4 00:54:03 2020
 ************************************************************************/

#include<stdio.h>
int check(int x, int y){
    if (x == y) return 100;
    else if (y == x / 10 +10 * (x % 10)) return 20;
    else if ((x / 10 == y /10 && x % 10 != y % 10) || (x / 10 == y % 10 && x % 10 != y / 10) || 
             (x / 10 != y /10 && x % 10 == y % 10) || (x / 10 != y % 10 && x % 10 == y / 10)) return 2;
    else return 0;

}
int main(){
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n", check(x, y));
    return 0;
}
