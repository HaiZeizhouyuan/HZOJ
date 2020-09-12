/*************************************************************************
	> File Name: 242.c
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月12日 星期六 15时42分33秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<unistd.h>
#define max_n 100000

#define min(a, b) ((a) > (b) ? (b) : (a))
#define max(a, b) ((a) > (b) ? (a) : (b))

long long nums[max_n + 5], d[max_n+ 5];
long long n, m, min_num, max_num;

long long func(long long mid) {
    for (long long i = 1; i <= n; i++) d[i] = nums[i] - mid;//b[i] = a[i] - A;
    for (long long i = 1; i <= n; i++) d[i] += d[i - 1];
    long long min_d = 0;
    for (long long i = m; i <= n; i++) {
        min_d = min(d[i - m], min_d);
        if (d[i] - min_d >= 0) return 1;
    }
    return 0;
}

long long search(long long l, long long r) {
    while(l < r) {
        long long mid = (l + r + 1) >> 1;
        if (func(mid)) l = mid;
        else r = mid - 1;
    }
    return l;
}
int main() {
    scanf("%lld%lld", &n, &m);
    for (long long i = 1; i <= n; i++) {
        scanf("%lld", &nums[i]);
        nums[i] *= 1000;
        if (i == 1) min_num = nums[i], max_num = nums[i];
        min_num = min(min_num, nums[i]);
        max_num = max(max_num, nums[i]);
    }
    printf("%lld\n", search(min_num, max_num));
    return 0;
}
