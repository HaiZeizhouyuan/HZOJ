/*************************************************************************
	> File Name: 438.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May 29 16:05:05 2020
 ************************************************************************/

#include<stdio.h>

double price(int n) {
    double a = 0.4783, b = 0.5283, c = 0.7783;
    if (n <= 240) return a * n;
    if (n >= 241 && n <= 400) return 240 * a + (n - 240) * b;
    else return 240 * a + 160 * b + (n - 400) * c;
}
int main () {
    int n;
    scanf("%d", &n);
    printf("%.1f\n", price(n));


    return 0;
}
