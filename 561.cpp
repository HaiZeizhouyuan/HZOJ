/*************************************************************************
	> File Name: 561.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月24日 星期二 20时43分03秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

int n, m, mempty, mfull, c[505], w[505], ans[10005];

int main() {
    memset(ans, 0x3F, sizeof(ans));
    cin >> mempty >> mfull;
    m = mfull - mempty;
    cin >> n;
    for (int i = 1;  i <= n; i++) {
        cin >> w[i] >> c[i];
    }
    ans[0] = 0;
    for (int i = 1;  i <= n; i++) {
        for (int j = c[i]; j <= m; j++) {
            ans[j] = min(ans[j], ans[j - c[i]] + w[i]);
        }
    }

    if (ans[m] != 0x3F3F3F3F) {
        cout << "The minimum amount of money in the piggy-bank is " << ans[m] << ".\n";
    } else {
        cout << "This is impossible." << endl;
    }
 
    return 0;
}
