/*************************************************************************
	> File Name: 464.c
	> Author: 
	> Mail: 
	> Created Time: Sat May  9 00:22:42 2020
 ************************************************************************/

#include<stdio.h>
int check(int y) {
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) return 1;
    return 0;
}
int f(int x, int y, int num) {
    if (x > y) return num;
    else if(check(x)) return f(x + 4, y, num + 1);
    else return f(x + 1, y, num);
}
int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n", f(x, y, 0));
    return 0;
}
