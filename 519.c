/*************************************************************************
	> File Name: 519.c
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月07日 星期一 17时02分39秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<unistd.h>



int dight(long long  num) {
    return floor(log10(num)) + 1;
}

int check(long long  n) {
    int dg = dight(n);
    int all_ans = 0, one_ans = 0, two_ans = 0;
    long long tmp = n, q = -1;
    long long one, two;
    while(tmp) {
        int g = tmp % 10;
    
        tmp /= 10;
    }

    if (one_ans == dg - 1 || two_ans == dg - 1) return 1;
    return 0;
}

int main() {
    long long L, R, sum = 0;
    scanf("%lld%lld", &L, &R);
    for (long long  i  = L; i <= R; i++) {
        if (check(i)) {
            sum += 1;
        }
    }
    printf("%lld\n", sum);
    return 0;
}
