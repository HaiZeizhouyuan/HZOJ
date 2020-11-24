/*************************************************************************
	> File Name: 47_v2.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月24日 星期二 18时59分54秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
int n, m, c[105], w[105],ans[10005];
int main() {
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        cin >> c[i] >> w[i];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = m; j >= c[i]; j--) {
            ans[j] = max(ans[j], ans[j - c[i]] + w[i]);
        }
    }
    cout << ans[m] << endl;
 
    return 0;
}
