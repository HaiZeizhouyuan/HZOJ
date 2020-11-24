/*************************************************************************
	> File Name: 47_v1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月24日 星期二 18时45分30秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
int n, m, w[105], c[105], ans[105][10005];


int main() {
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        cin >> c[i] >> w[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (j >= c[i]) {
                ans[i][j] = max(ans[i - 1][j], ans[i - 1][j - c[i]] + w[i]);
            } else {
                ans[i][j] = ans[i - 1][j];
            }
        }
    }
    cout << ans[n][m] << endl;
    return 0;
}
