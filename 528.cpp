/*************************************************************************
	> File Name: 528.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年10月13日 星期二 18时20分08秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
using namespace std;
 
struct node {
    int now, step;
};

int n, x, y, num[105][105], check[105];

int main() {
    cin >> n >> x >> y;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> num[i][j];
        }
    }
    queue<node> que;
    que.push((node){x, 0});
    check[x] = 1;
    while(!que.empty()) {
        node tmp = que.front();
        que.pop();
        for (int i = 1; i <= n; i++) {
            if (i == y && num[tmp.now][y] == 1) {
                cout << tmp.step << endl;
                return 0;
            }
            if (num[tmp.now][i] == 1 && check[i] == 0) {
                check[i] = 1;
                que.push((node){i, tmp.step + 1});
            } 
        }
    }
    cout << 0 << endl;
    return 0;
}
