/*************************************************************************
	> File Name: 525.c
	> Author: 
	> Mail: 
	> Created Time: Fri Aug  7 09:07:37 2020
 ************************************************************************/

#include<stdio.h>

char str[30];
int cnt = 0, sum = 0;
char q = 'A';
int func(int n, int k, char s) {
    for (char a = s; a <= q + n - 1; a++) {
        str[cnt++] = a;
        sum += 1;
        if (sum == k) {
            for (int i = 0; i < cnt; i++) {
                printf("%c", str[i]);
            }
            return 1;
        }
        if (func(n, k, a + 1)) return 1;
        cnt -= 1;
    }
    return 0;
}

int main () {
    int n, k;
    scanf("%d%d",&n, &k);
    func(n, k, q);
    printf("\n");
    return 0;
}
