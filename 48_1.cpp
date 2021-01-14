/*************************************************************************
	> File Name: 48_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年01月11日 星期一 15时28分07秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

#define MAX_N 10000

int dp[MAX_N + 5];

int main() {
    int V, n, v, w;
    cin >> n >> V;
    for (int i = 1; i <= n; i++) {
        cin >> v >> w;
        for (int j = v; j <= V; j++) {
            dp[j] = max(dp[j], dp[j - v] + w);
        }
        for (int j = 0; j <= V; j++) {
            cout << dp[j] << " ";
        }
        cout << endl;
    }
    cout << dp[V] << endl;
    return 0;
}
