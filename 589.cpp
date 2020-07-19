/*************************************************************************
	> File Name: 589.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun Jul 19 11:30:20 2020
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int num[15] = {0};
int main () {
    int n, k, id;
    scanf("%d %d %d", &n, &k, &id);
    if (k == n) printf("1 / 1\n");
    else if (k == 0) printf("0 / 1\n");
    else {
        int re = gcd(n, k);
        int c = k / re, d = n / re;
        printf("%d / %d\n", c, d);

    }
    return 0;
}
