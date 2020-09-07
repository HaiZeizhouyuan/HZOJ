/*************************************************************************
	> File Name: 518.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月07日 星期一 14时54分19秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
 
int main() {
    int x, sum = 0, mon = 1, day = 1;
    scanf("%d", &x);
    for (int i = 1; i <= x;) {
        for (int j = 0; j < day && (i + j <= x); j++) 
            sum += mon;
        mon += 1;
        i += day;
        day += 1;
    }
    printf("%d\n", sum);
    return 0;
}
