/*************************************************************************
	> File Name: 48_v1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月24日 星期二 19时24分28秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;


int n,  m, c[105], w[105], ans[105][105];
 
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> c[i] >> w[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (j >= c[i]) {
                ans[i][j] = max(ans[i - 1][j], ans[i][j - c[i]] + w[i]);
            } else {
                ans[i][j] = ans[i - 1][j];
            }
        }
    }
    cout << ans[n][m] << endl;
    return 0;
}
