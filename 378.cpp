/*************************************************************************
	> File Name: 378.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat Jul 18 14:03:41 2020
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int init(char *str) {
    int len = strlen(str);
    if (len & 1) return 0;
    char *stack = (char *)malloc(sizeof(char) * len);
    int top = -1, flag = 1;
    while (str[0]) {
        switch (str[0]) {
            case '(':
            case '[':
            case '{':
                stack[++top] = str[0];
                break;
            case ')':
                flag = ((top != -1) && (stack[top--] == '('));
                break;
            case ']':
                flag = ((top != -1) && (stack[top--] == '['));
                break;
            case '}':
                flag = ((top != -1) && (stack[top--] == '{'));
                break;
            default :
                break;
        }
        if (!flag) return 0;;
        str += 1;
    }
    free(stack);
    return top == -1;
}


int main () {
    char str[30];
    char temp;
    for (int i = 0, k = 0; ; i++) {
        scanf("%c", &temp);
        if (temp == '@') break;
        if (97 <= temp && temp <= 122) continue;
        str[k++] = temp;
    }
    printf("%s\n", init(str) ? "YES" : "NO");
    return 0;
}
