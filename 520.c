/*************************************************************************
	> File Name: 520.c
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月07日 星期一 20时53分55秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<unistd.h>
#define max_n 1940500 
int func(int l, int r) {
    int sum = 0;
    for (int i = l; i <= r; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int a, flag = 0, n, k;
    scanf("%d", &a);
    for (n = a; n < max_n && !flag; n++) {
        for (k = 2; k <= n && !flag; k++) {
            int a = func(1, k - 1);
            int b = func(k + 1, n);
            if (n == 8) printf("n : %d, k : %d, func(1, k -1) : %d, func(k + 1, n) : %d\n",n, k, a, b);
            if (a == b) flag = 1;
        }
    }
    printf("%d %d\n", k, n);
    return 0;
}
