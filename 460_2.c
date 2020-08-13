/*************************************************************************
	> File Name: 460_2.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月13日 星期四 21时24分58秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int n, k, ans;
    while (scanf("%d%d", &n, &k)) {
        ans = 0;
        for (int i = 2; i <= n; i++) {
            ans = (ans + k) % i;
        }
        printf("%d\n", ans + 1);
    }
	return 0;
}
