/*************************************************************************
	> File Name: 55.c
	> Author: 
	> Mail: 
	> Created Time: Fri Aug  7 17:39:06 2020
 ************************************************************************/

#include<stdio.h>

int func(int y, int m, int d) {
    if (m <= 2) {
        m += 12;
        y -= 1;
    }
    int j = y / 100;
    y %= 100;
    return (d + 26 * (m + 1)/ 10 + y + y/4 + j/4 + 5 * j) % 7;
}

int main () {
    int y1, m1, d1;
    int y2, m2, d2, sum = 0;
    scanf("%d%d%d", &y1, &m1, &d1);
    scanf("%d%d%d", &y2, &m2, &d2);
    if (m1 > 6) y1 += 1;
    else if (m1 == 6 && d1 > 6) y1 += 1;
    if (m2 < 6) y2 -= 1;
    else if (m2 == 6 && d2 < 6) y2 -= 1;
    for (int y = y1; y <= y2; y++) {
        if (func(y, 6, 6) == 0) {
            sum += 1;
        }
    }
    printf("%d\n", sum);
    return 0;
}
