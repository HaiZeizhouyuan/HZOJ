/*************************************************************************
	> File Name: 674.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月19日 星期四 20时48分59秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

int n, m, mback[105], mfront[105], ans[4505][4505];

int main() {
    memset(ans, 0x3F, sizeof(ans));
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        ans[a][b] = 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                ans[j][k] = min(ans[j][k], ans[j][i] + ans[i][k]);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (ans[i][j] != 0x3F3F3F3F) {
                mback[i]++;
                mfront[j]++;
            }
        }
    }
    int fin = 0;
    for (int i = 1; i <= n; i++) {
        if (mback[i] + mfront[i] == n - 1) {
            fin++;
        }
    }
    cout << fin << endl;
    return 0;
}
