/*************************************************************************
	> File Name: 460_1.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月13日 星期四 20时04分17秒
 ************************************************************************/

#include<stdio.h>

int n, k, num[1000] = {0}, sum;
int func (int q, int left) {
    while (1) {
        if (num[q] == 0) break;
        q = (q + 1) % n;
    }
    sum = 0;
    if (left == 1) return q;
    while (1) {
        if (!num[q]) sum += 1;
        if (sum == k ) {
            num[q] = 1;
            //printf("%d out!\n", i + 1);
            return func((q + 1) % n, left - 1);
        }
        q = (q + 1) % n;
    }
}
int main() {
    scanf("%d%d", &n, &k);
    printf("%d\n",func(0, n) + 1);
	return 0;
}
