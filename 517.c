/*************************************************************************
	> File Name: 517.c
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月07日 星期一 15时27分16秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<unistd.h>
 
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n / 3; i++) {
        for (int j = i; j <= (n - i) / 2; j++) {
            int ans = n - i - j;
            if (ans < j) continue;
            if ((i + j > ans) && (j - i < ans)) sum += 1;
        }
    }
    printf("%d\n", sum);
    return 0;
}
