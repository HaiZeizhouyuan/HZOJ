/*************************************************************************
	> File Name: 245.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月02日 星期三 18时25分43秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include <algorithm>
using namespace std;
 
#define max_n 100000

int  num[max_n + 5];
int sum;
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &num[i]);
    sort(num, num + n);
    int x = num[n / 2];
    for (int i = 0; i < n; i++) sum += abs(num[i] - x);
    printf("%d\n", sum);
    return 0;
}

