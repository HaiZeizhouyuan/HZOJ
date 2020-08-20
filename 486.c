/*************************************************************************
	> File Name: 486.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月15日 星期六 19时18分03秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int f[1005] = {0, 1, 3};
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 3; i <= n; i++) {
        f[i] = f[i - 1] + 2 * f[i - 2];
        f[i] %= 12345;
    }
    printf("%d\n", f[n]);
	return 0;
}
