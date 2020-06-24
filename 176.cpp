/*************************************************************************
	> File Name: 176.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu May 28 11:33:28 2020
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define max_n 1000

char str1[max_n + 5];
char str2[max_n + 5];

int main() {
    gets(str1);
    gets(str2);
    int len1 = strlen(str1), len2 = strlen(str2);
    int ans = 0;
    for (int i = 0; i <= len1 - len2; i++) {
        if (strncmp(&str1[i], str2, len2) == 0) {
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}
