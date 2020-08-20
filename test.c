/*************************************************************************
	> File Name: test.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月15日 星期六 21时47分38秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int n, num[100005][2], mmin, all;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d%d", &num[i][0], &num[i][1]);
        if (i > 1) {
            
            all += abs(num[i][0] - num[i - 1][0]) +
                    abs(num[i][1] - num[i - 1][1]);
            printf("all[%d] = %d\n", i, all);
        }
                
    }
    mmin = all;
    printf("max = %d\n", mmin);
    for (int i = 2; i < n; i++) {
        int t = all;
        t -= abs(num[i][0] - num[i - 1][0]) +
            abs(num[i][1] - num[i - 1][1]) +
            abs(num[i][0] - num[i + 1][0]) + 
            abs(num[i][1] - num[i + 1][1]);
        t += abs(num[i + 1][0] - num[i - 1][0]) +
            abs(num[i + 1][1] - num[i - 1][1]);
        if (t < mmin) {
            mmin = t;
        }
        printf("%d\n", mmin);            
    }
    printf("%d\n", mmin);
    return 0;
}
