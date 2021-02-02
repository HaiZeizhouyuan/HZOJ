/*************************************************************************
	> File Name: 270_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月02日 星期二 16时23分45秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
#include<climits>
using namespace std;
#define MAX_N 300000
int sum[MAX_N + 5], n, m;
int que[MAX_N + 5], head, tail;
void read() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> sum[i];
        sum[i] += sum[i - 1];
    }
    return ;
}

int get_res() {
    int max_sum = INT_MIN;
    head = tail = 0;
    que[tail++] = 0;

    for (int i = 1; i <= n; i++) {
        if (i - que[head] > m) head++;
        max_sum = max(max_sum, sum[i] - sum[que[head]]);
        while(tail - head && sum[que[tail - 1] > sum[i]]) tail--;
        que[tail++] = i;
    }
    return max_sum;
}

int main() {
    read();
    cout << get_res() << endl;
    
    return 0;
}
