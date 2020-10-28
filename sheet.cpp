/*************************************************************************
	> File Name: sheet.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年10月27日 星期二 18时34分54秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
using namespace std;
 
int n, m;

int main() {
    cin >> n >> m;
    vector<vector<pair<int, int> > > v(n + 1, vector<pair<int, int> >(0));
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back(pair<int, int>(b, c));
        v[b].push_back(make_pair(a, c));
    }

    for (int i = 1; i <= n; i++) {
        cout << i << " : ";
        for (int j = 0; j < v[i].size(); j++) {
            cout << "(" << v[i][j].first << "," << v[i][j].second << ") ";
        }
        cout << endl;
    }
    return 0;
}
