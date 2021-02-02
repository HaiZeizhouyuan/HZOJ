/*************************************************************************
	> File Name: 52_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月02日 星期二 14时17分22秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

#define MAX_N 1000000
#define Q(a) ((a) * (a))

int n, M;
long long sum[MAX_N + 5], f[MAX_N + 5], dp[MAX_N + 5];
int que[MAX_N + 5], tail, head;

void get_sum() {
    cin >> n >> M;
    for (int i = 1; i <= n; i++) {
        cin >> sum[i];
        sum[i] += sum[i - 1];
    }
    return ;
}

double get_slope(int i, int j) {
    return 1.0 * (f[i] - f[j]) / (sum[i] - sum[j]);
}

void set_dp_and_f(int i, int j) {
    dp[i] = dp[j] + Q(sum[i] - sum[j]) + M; 
    f[i] = dp[i] + Q(sum[i]);
    return ;
}

long long get_res() {
    head = tail = 0;
    que[tail++] = 0;
    for (int i = 1; i <= n; i++) {
        while(tail - head >= 2 && get_slope(que[head + 1], que[head]) < 2 * sum[i]) head++;
        set_dp_and_f(i, que[head]);
        while(tail - head >= 2 && get_slope(i, que[tail - 1]) < get_slope(que[tail - 1], que[tail - 2])) tail--;
        que[tail++] = i;
    }
    return dp[n];
}

int main() {
    get_sum();
    cout << get_res() << endl;
 
    return 0;
}
