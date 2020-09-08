/*************************************************************************
	> File Name: 520.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月08日 星期二 16时26分10秒
 ************************************************************************/
#include <stdio.h>
#include<unistd.h>
#define max_n 15000000
long long a, sum[max_n  + 5];

int S() {
    for (int i = 1; i <= max_n; i++) {
        sum[i] = sum[i - 1] + i;            
    }
}

int func(int n, int k) {
    return sum[n] - sum[k] - sum[k - 1];
}

int main() {
    scanf("%lld", &a);
    S();
    for (int k = a; ; k++) {
        int l = k + 1, r = max_n;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (func(mid, k) == 0) {
                printf("%d %d\n", k, mid);
                return 0;                            
            }
            if (sum[mid] - sum[k] - sum[k - 1] < 0 ) {
            printf(" l : sum[%d] - sum[%d] - sum[%d] == %lld - %lld- %lld\n",
                   mid, k, k - 1, sum[mid], sum[k], sum[k - 1]);
            sleep(1);
                l = mid + 1;   
            } else {
                printf("r : sum[%d] - sum[%d] - sum[%d] == %lld - %lld- %lld\n", 
                       mid, k, k - 1, sum[mid], sum[k], sum[k - 1]);
            sleep(1);
                r = mid - 1;
            }                                            
        }
            
    }
        return 0;

}
