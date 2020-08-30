/*************************************************************************
	> File Name: 79.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月30日 星期日 14时35分39秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#define max_n 10000000

int prime[max_n + 5] = {0};

void is_prime(int a, int b) {
    for (int i = 2; i <= b; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            if (i >= a) printf("%d\n", i);
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > b) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
}


int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    is_prime(a, b);
    return 0;
}
