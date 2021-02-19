/*************************************************************************
	> File Name: 534_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月09日 星期二 16时17分59秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

int n;
int num[25], mark[1005] = {1}, ans = 0;

void dfs(int q, int v) {
    if (mark[v] == 0) {
        mark[v] = 1;
        ++ans;
    }
    for (int i = q; i < n; i++) {
        v += num[i];
        dfs(i + 1, v);
        v -= num[i];
    }
}


int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    dfs(0, 0);
    cout << ans << endl;
    return 0;
}
