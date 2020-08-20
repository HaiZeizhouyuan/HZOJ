/*************************************************************************
	> File Name: 487.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月15日 星期六 19时58分17秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int f[45] = {0, 2, 2};
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 3; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    printf("%d\n", f[n]);
	return 0;
}
