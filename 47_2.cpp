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

int dp[MAX_V + 5];

int main() {
    int V, n, v, w;
    cin >> V >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v >> w;
        for (int j = V; j >= v; j--) {
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
