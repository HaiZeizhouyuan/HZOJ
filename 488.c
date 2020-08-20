/*************************************************************************
	> File Name: 488.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月15日 星期六 20时52分36秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max_n 100000

int n, city[max_n + 5][2], minlen = 0;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d%d", &city[i][0], &city[i][1]);
    for (int i = 0; i < n - 1; i++) {
        minlen += abs(city[i + 1][0] - city[i][0]) + abs(city[i + 1][1] - city[i][1]);
    }
    int temp = minlen;
    for (int i = 1; i < n - 1; i++) {
        temp -= abs(city[i][0] - city[i - 1][0]) + abs(city[i][1] - city[i - 1][1]) + 
                abs(city[i + 1][0] - city[i][0]) + abs(city[i + 1][1] - city[i][1]);
        temp += abs(city[i + 1][0] - city[i - 1][0]) + abs(city[i + 1][1] - city[i - 1][1]);
        if (temp < minlen) minlen = temp;
        printf("%d\n", minlen);
    }
    printf("%d\n", minlen);
	return 0;
}
