/*************************************************************************
	> File Name: 480.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月31日 星期一 15时59分38秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

char *str[15];
char tmp[5];

int main() {
    int k = 10;
    for (int i = 0; i < k; i++) {
        scanf("%s", tmp);
        if (i == 9 && strlen(tmp) == 1) k += 1;

    }

    return 0;
}
