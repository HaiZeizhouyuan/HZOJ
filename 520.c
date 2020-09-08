/*************************************************************************
	> File Name: 520.c
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月07日 星期一 20时53分55秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<unistd.h>
#define max_n 15000000

long long sum[max_n + 5], a;

void S() {
    for (int i = 1; i <= max_n; i++) {
        sum[i] = sum[i - 1] + i;
    }
    return ;
}

long long  func(long long n, long long k) {
    return sum[n] - sum[k] - sum[k - 1];
}

int main() {
    long long  l, r;
    scanf("%lld", &a);
    S();
    for (long long  k = a; ; k++) {
        l = k + 1, r = max_n;
        while(l <= r) {
            long long mid = (l + r) / 2;
            long long flag = func(mid, k);
            
            if (flag == 0) {
                printf("%lld %lld\n", k, mid);
                return 0;
            }
            if (flag < 0) l = mid + 1;
            else r = mid - 1;
        }
    }
    return 0;
}
