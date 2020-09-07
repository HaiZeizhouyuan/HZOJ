/*************************************************************************
	> File Name: 513.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月07日 星期一 11时28分29秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
 
int m, t;

int check(int num) {
    int tmp = num;
    while(tmp) {
        int g = tmp % 10;
        if (g == t) return 0;
        tmp /= 10;
    }
    return 1;
}


int main() {
    scanf("%d%d", &m, &t);
    int sum = m;
    for (int i = 1; i <= m; i++) {
        if (!check(i)) sum -= 1; 
    }
    printf("%d\n", sum);
    return 0;
}
