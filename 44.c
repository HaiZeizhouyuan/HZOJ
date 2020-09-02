/*************************************************************************
	> File Name: 44.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月02日 星期三 09时54分29秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#define max_n 1000000


int n;
int num[max_n + 5];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    return 0;
}
