/*************************************************************************
	> File Name: 484.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月29日 星期六 20时51分14秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
 
int main() {
    int mark[100] = {0};
    int max_num = 0;
    char str[1005];
    while(~scanf("%s", str)) {
        for (int i = 0; i < strlen(str); i++) {
            if (str[i] < 65 || str[i] > 90) continue;
            mark[str[i]] += 1;
            if (mark[str[i]] > max_num) max_num = mark[str[i]];
        }
    }
    char last;
    for (int i = max_num; i >= 1; i--) {
        for (char j = 'A'; j <= 'Z'; j++) {
            if (mark[j] >= i) last = j;
        }
        for (char j = 'A'; j <= last; j++) {
            if (j != 'A') printf(" ");
            if (mark[j] < i) {
               printf(" ");
            } else {
                printf("*");

            }
        }
        printf("\n");
    }
    char q = 'A';
    for (int i = 0; i < 26; i++) {
        i && printf(" ");
        printf("%c", q++);
    }
    printf("\n");
    return 0;
}
