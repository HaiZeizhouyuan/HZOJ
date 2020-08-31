/*************************************************************************
	> File Name: 481.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月30日 星期日 21时21分06秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

#define min(a, b) ({\
    return a < b ? a : b;\
})


#define max_r 1000

int r, num, sum_a, sum_b;
int num1[15], num2[15];

int func(int *nums, int minn) {
    int ans = 0;
    for (int i = 0; i < 8; i++) {
        if (nums[i] <= r && minn > nums[i]) ans += 1;
    }
    return ans;
}

int main() {
    scanf("%d", &r);
    for (int k = 0; k < 10; k++) {
        int min_a = max_r, min_b = max_r;
        //memset(num1, 0, sizeof(num1));
       // memset(num2, 0, sizeof(num2));
        for (int i = 0; i < 8; i++) {
            scanf("%d", &num1[i]);
            if (num1[i] == -1) {
                printf("%d:%d\n", sum_a, sum_b);
                return 0;
            }
            if (num1[i] < min_a) min_a = num1[i];
        }
        for (int i = 0; i < 8; i++) {
            scanf("%d", &num2[i]);
            if (num2[i] < min_b) min_b = num2[i];
        }
        if (min_a < min_b) {
            int re = func(num1, min_b);
            printf("%d:%d\n", re, 0);
            sum_a += re;
        }
        else if (min_b < min_a) {
            int re = func(num2, min_a);
            printf("%d:%d\n", 0, re);
            sum_b += re;
        }
        else printf("%d:%d\n", 0, 0);
    }
    printf("%d:%d\n", sum_a, sum_b);

    return 0;
}
