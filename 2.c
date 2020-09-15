/*************************************************************************
	> File Name: 2.c
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月15日 星期二 10时53分34秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<unistd.h>

int score;

int main() {
    scanf("%d", &score);
    if (score < 60) printf("D\n");
    else if (score < 75) printf("C\n");
    else if (score < 85) printf("B\n");
    else if (score <= 100) printf("A\n");
    return 0;
}
