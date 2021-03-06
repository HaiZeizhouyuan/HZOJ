/*************************************************************************
	> File Name: 49_v1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月24日 星期二 19时51分14秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
int n, m, ind,  c[1005], w[1005], ans[10005];

int main() {
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        int a, b, d;
        cin >> a >> b >> d;
        for (int j = 0; j < d; j++) {
            ind++;
            c[ind] = a;
            w[ind] = b;
        }
    }
    for (int i = 1; i <= ind; i++) {
        for (int j = m; j >= c[i]; j--) {
            ans[j] = max(ans[j], ans[j - c[i]] + w[i]);
        }
    }
    cout << ans[m] << endl;
    return 0;
}
