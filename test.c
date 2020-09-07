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
#include<unistd.h>

int main() {
    long long a, b, ans = 0;
	scanf("%lld%lld", &a, &b);
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            if (i == j) continue;
            for (int k = 3; k <= 17; k++) {
                for (int l = 1; l <= k; l++) {
                    if (l == 1 && j == 0) continue;
                    if (l != 1 && i == 0) break;
                    long long t = 0;
                    for (int m = 1; m <= k; m++) {
                        if (m == l) {
                            t = t * 10 + j;
                        } else {
                            t = t * 10 + i;
                        }
                    }
                    if (t >= a && t <= b) {
                        printf("%lld\n", t);
                        // sleep(1);
                        ans++;

                    }
                }
            }
        }
    }
    printf("%lld\n", ans);
    return 0;
}
 
