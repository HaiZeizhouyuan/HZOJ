/*************************************************************************
	> File Name: 47_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年01月09日 星期六 15时18分24秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
#define MAX_N 100
#define MAX_V 10000

int dp[2][MAX_V + 5];

int main() {
    int V, n, v, w;
    cin >> V >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v >> w;
        for (int j = 1; j <= V; j++) {
            dp[i % 2][j] = dp[(i - 1) % 2][j];
            if (j >= v) {
                dp[i % 2][j] = max(dp[i % 2][j], dp[(i - 1) % 2 ][j - v] + w);
            }
        }
    }

    cout << dp[n % 2][V] << endl;
    return 0;
}
