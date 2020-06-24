/*************************************************************************
	> File Name: 116.c
	> Author: 
	> Mail: 
	> Created Time: Mon May  4 17:39:58 2020
 ************************************************************************/

#include<stdio.h>
void check(int a, int b, int c){
    int t;
    if (a > b) {
        t = a;
        a = b;
        b = t;
    }
    if (b > c) {
        t = b;
        b = c;
        c = t;

    }
    if (a + b > c){
        if (a * a + b * b > c * c) {
            printf("acute triangle\n");
        }else if (a * a + b * b == c * c) {
            printf("right triangle\n");
        }else{
            printf("obtuse triangle\n");

        }
    }else {
      printf("illegal triangle\n");  
    }
}
int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    check(a, b, c);
    return 0;
}
