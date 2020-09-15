/*************************************************************************
	> File Name: 489.c
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月15日 星期二 18时34分31秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<unistd.h>
#define max_n 1000
int n;
int j[max_n + 5] = {0, 1}, o[max_n + 5] = {0, 8};
void func() {
    for (int i = 2; i <= n; i++) {
        j[i] = (o[i - 1] + 9 * j[i - 1]) % 12345;
        o[i] = (9 * o[i - 1] + j[i - 1]) % 12345;
    }
    return ;
}

int main() {
    scanf("%d", &n);
    func(n);
    printf("%d\n", o[n]);
    return 0;
}
