/*************************************************************************
	> File Name: 243.c
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月12日 星期六 20时55分00秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<unistd.h>
#define max_n 200000
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

long long t, n, min_s, max_e;

struct Stu{
    long long s, e, d;
}stu[max_n + 5];

long long count(long long loc) {
    long long sum = 0;
    for (long long i = 0; i < n; i++) {
        if (stu[i].s > loc) continue;
        if (stu[i].e <= loc) {
            sum += (stu[i].e - stu[i].s) / stu[i].d + 1;
            continue;
        }
        sum += (loc - stu[i].s) / stu[i].d + 1;
        
    }
    return sum;
}

long long search(long long l, long long r) {
    while(l < r) {
        long long mid = (l + r) >> 1;
        if (count(mid) & 1) r = mid;
        else l = mid + 1;
    }
    return l;
}

void test() {
    scanf("%lld", &n);
    for (long long i = 0; i < n; i++) {
        scanf("%lld%lld%lld", &stu[i].s, &stu[i].e, &stu[i].d);
        if (i == 0) min_s = stu[i].s, max_e = stu[i].e;
        min_s = min(min_s, stu[i].s);
        max_e = max(max_n, stu[i].e);
    }
    long long loc = search(min_s, max_e);
    long long ans = count(loc) - count(loc - 1);
    if (ans & 1) {
        printf("%lld %lld\n", loc, ans);
        return ;
    } 
    printf("Poor QIN Teng:(\n");
    return ;
}

int main() {
    scanf("%lld", &t);
    while(t--) test();
    return 0;
}
