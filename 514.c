/*************************************************************************
	> File Name: 514.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月07日 星期一 11时53分08秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#define max_n 1000

int num[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int n, ans, re;

int check(int num1) {
    if (num1 < 10) return num[num1]; 
    int tmp = num1;
    int sum = 0;
    while(tmp) {
        int g = tmp % 10;
        sum += num[g];
        tmp /= 10;
    }
    return sum;
}

int main() {
    scanf("%d", &n);
    ans = n - 4;

    for (int i = 0; i <= max_n; i++) {
        for (int j = 0; j <= max_n; j++ ) {
            int a = check(i);
            int b = check(j);
            int c = check(i + j);
            if (a + b + c == ans) {
                re += 1;
               // printf("a : %d, b = %d, c = %d\n", a, b, c);
            }
        }
    }
    printf("%d\n", re);
    return 0;
}
