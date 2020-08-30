/*************************************************************************
	> File Name: 477.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月29日 星期六 20时24分35秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
 
int main() {
    char sta[105], tail = 0;
    char str[105];
    int max_d = 0;
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') sta[tail++] = i;
        if(tail > 1) {
            int d = sta[tail - 1] - sta[tail - 2];
            if (d > max_d) max_d = d;
        }
    }
    printf("%d\n", max_d);


    return 0;
}
