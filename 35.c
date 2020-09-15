/*************************************************************************
	> File Name: 35.c
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月15日 星期二 10时42分32秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<unistd.h>

int b, e;

int main() {
    scanf("%d%d", &b, &e);
    if (b < 0) b = 0;
    if ((b > e) || (b == e) || (b + 1 == e)) printf("ERROR\n");
    else {
        for (int i = b; i <= e; i++) {
            printf("%d\n", i);
        }
    }
    return 0;
}
