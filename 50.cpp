/*************************************************************************
	> File Name: 50.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年01月12日 星期二 15时17分04秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 32 
#define MAX_M 1000000
int dp[MAX_N + 5][MAX_M + 5];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i <= m; i++) dp[1][i] = i;
    for (int i = 2; i <= n; i++) {
        int k = 1;
        dp[i][1] = 1;
        //dp[i][2] = 2;
        for (int j = 2; j <= m; j++) {
            if ( k < j && dp[i - 1][k - 1] < dp[i][j - k]) ++k;
            dp[i][j] = max(dp[i - 1][k - 1], dp[i][j - k]) + 1;
        }
    }
    cout << dp[n][m] << endl;
    return 0;
}
