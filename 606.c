/*************************************************************************
	> File Name: 606.c
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月11日 星期五 20时06分02秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<unistd.h>
#define max_n 10000
#define max(a, b) ((a) > (b) ? (a) : (b))
int max_s = -1000;

int main() {
    int n, tmp;
    scanf("%d", &n);
    int dp[max_n + 5];
    for (int i = 1; i <= n; i++) {
        scanf("%d", &tmp);
        if (i == 1) dp[i] = tmp;
        else dp[i] = max(dp[i - 1] + tmp, tmp);
        if (dp[i] > max_s) max_s = dp[i];
    } 
    printf("%d\n", max_s);
    return 0;
}
