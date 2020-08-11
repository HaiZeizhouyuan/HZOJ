/*************************************************************************
	> File Name: 260.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: Tue Aug 11 09:44:42 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max_n 1000

int a, b;
char str[max_n + 5];
long long num[max_n + 5] = {0};

int init(char s) {
    if ('0' <= s && s <= '9') return s - '0';
    if ('A' <= s && s <= 'Z') return s - 'A' + 10;
    if ('a' <= s && s <= 'z') return s - 'a' + 36;
}



long long *to_ten(int a, int b, char *str) {
    int l = strlen(str), i = 0;
    while (--l) num[l] = init(str[l]) * pow(a, i); 
    for (int i = 0; i < l; i++) {}
    return num;
}

int main() {
    scanf("%d%d", &a, &b);
    scanf("%s", str);
	return 0;
}
