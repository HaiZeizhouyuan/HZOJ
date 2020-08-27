/*************************************************************************
	> File Name: 588.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月27日 星期四 09时25分37秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max_n 10000
int n;
char str[max_n + 5];
char *stan[max_n + 5];

char *func(int n) {
    if (n == 1) return "1";
    char tmp[max_n + 5];
    strcpy(tmp, func(n - 1));
    int num = 0;
    char c;
    printf("n = %d : %s\n", n, tmp);
    memset(str, 0, sizeof(str));
    for (int i = 0; i < strlen(tmp); i++) {
        if (i == 0) {
            num += 1;
            c = tmp[i];
        } else if (tmp[i] == c) {
            num += 1;
        } else  {
            sprintf(str, "%s%d%c", str, num, c);
            c = tmp[i];
            num = 1;
        }
    }
    sprintf(str, "%s%d%c", str, num, c);
    return str;
}

int main() {
    scanf("%d", &n);
    printf("%s\n", func(n));
    return 0;
}
