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
        if (nums[i] <= 8 && minn > nums[i]) ans += 1;
    }
    return ans;
}

int main() {
    scanf("%d", &r);
    while(1) {
        int min_a = max_r, min_b = max_r;
        memset(num1, 0, sizeof(num1));
        memset(num2, 0, sizeof(num2));
        for (int i = 0; i < 8; i++) {
            scanf("%d", &num);
            if (num == -1) {
                printf("%d:%d\n", sum_a, sum_b);
                return 0;
            }
            num1[i] = num;
            if (num < min_a) min_a = num;
        }
        for (int i = 0; i < 8; i++) {
            scanf("%d", &num);
            num2[i] = num;
            if (num < min_b) min_b = num;
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
 
    return 0;
}
