/*************************************************************************
	> File Name: 49_v2.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月24日 星期二 20时02分49秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

int n, m, ind, c[2005], w[2005], ans[100005], bit2[20] = {1};

void init() {
    for (int i = 1; i < 20; i++) {
        bit2[i] = bit2[i - 1] * 2;
    }
}

int main() {
    init();
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        int a, b, d, temp = 0;
        cin >> a >> b >> d;
        while(d) {
            ind++;
            if (d > bit2[temp]) {
                c[ind] = a * bit2[temp];
                w[ind] = b * bit2[temp];
                d -= bit2[temp];
                temp++;
            } else {
                c[ind] = a * d;
                w[ind] = b * d;
                d = 0;
            } 
        }
    }
    for (int i = 1; i <= ind; i++) {
        for (int j = m ; j >= c[i]; j--) {
            ans[j] = max(ans[j], ans[j - c[i]] + w[i]);
        }
    }
    cout << ans[m] << endl;
    return 0;
}
