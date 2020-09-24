/*************************************************************************
	> File Name: 398.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月24日 星期四 19时53分15秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
using namespace std;
 
struct node{
    int x, y, step;
};

int n, m, sx, sy, ans[405][405], check[405][405];
int dir[8][2] = {1, 2, 1, -2, -1, 2, -1, -2, 2, 1, 2, -1, -2, 1, -2, -1};

int main() {
    cin >> n >> m >> sx >> sy;
    queue<node> que;
    que.push((node){sx, sy, 0});
    check[sx][sy] = 1;
    while(!que.empty()) {
        node tmp = que.front();
        que.pop();
        for (int i = 0; i < 8; i++) {
            int x = tmp.x + dir[i][0];
            int y = tmp.y + dir[i][1];
            if (x <= 0|| y <= 0 || x > n || y > m || check[x][y] == 1) continue;
            ans[x][y] = tmp.step + 1;
            check[x][y] = 1;
            que.push((node){x, y, ans[x][y]});

        }
    }


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (j != 1) {
                cout << " ";
            }
            if (ans [i][j] == 0) {
                if (check[i][j] == 1) {
                    cout << 0;
                } else {
                    cout << -1;
                }
            } else {
                cout << ans[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}
