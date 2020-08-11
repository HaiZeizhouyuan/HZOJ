/*************************************************************************
	> File Name: 469.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: Mon Aug 10 21:36:05 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <string.h>
int main() {
    int x;
    char str[50];
    scanf("%d", &x);
    scanf("%s", str);
    int sum = 0, l = strlen(str), i = 0;
    while (l) sum +=  (str[--l] - '0')* pow(x, i++);
    printf("%d\n", sum);
	return 0;
}
