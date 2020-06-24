/*************************************************************************
	> File Name: 181.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun May 24 11:04:34 2020
 ************************************************************************/
#include <stdio.h>
#define max_n 10000

char str[max_n + 5];

void check (char *str) {
    for (int i = 0; i < str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
        else str[i] += 32;
    }
    printf("%s\n", str);
}

int main(){
    scanf("%s", str);
    check(str);
    return 0;
}
