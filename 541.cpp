/*************************************************************************
	> File Name: 541.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年10月15日 星期四 19时44分47秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
using namespace std;
 
int n, m, sum, arr[2][20][20], ans[2][100005], cnt[2];

void func(int mark, int now) {
    if (now == n) {
        ans[mark][cnt[mark]++] = sum;
        return ;
    }
    for (int i = now + 1; i <= n; i++) {
        if (arr[mark][i][now]) {
            sum += arr[mark][i][now];
            func(mark, i);
            sum -= arr[mark][i][now];
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        arr[0][a][b] = arr[0][b][a] = c;
        arr[1][a][b] = arr[1][b][a] = d;
    }
    func(0, 1);
    func(1, 1);
    sort(ans[0], ans[0] + cnt[0]);
    for (int i = 0; i < cnt[0]; i++) {
        for (int j = 0; j < cnt[1]; j++) {
            if (ans[0][i] == ans[1][j]) {
            cout << ans[0][i] << endl;
            return 0;

            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
