/*************************************************************************
	> File Name: 398_bfs.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月19日 星期五 21时11分18秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
const int MAX_N = 400;

struct node{
    int x, y, step;
};
int n, m, sx, sy;
int ans[MAX_N + 5][MAX_N + 5], check[MAX_N + 5][MAX_N + 5];
int dir[8][2] = {1, 2, 2, 1, -1, 2, -2, 1, -1, -2, -2, -1, 1, -2, -2, 1};


void bfs() {
    queue<node> que;
    que.push((node){sx, sy, 0});
    check[sx][sy] = 1;
    while(!que.empty()) {
        node tmp = que.front();
        que.pop();
        for (int i = 0; i < 8; i++) {
            int x = tmp.x + dir[i][0];
            int y = tmp.y + dir[i][1];
            if (x <= 0 || y <= 0 || x > n || y > m || check[x][y] == 1) continue;
            ans[x][y] = tmp.step + 1;
            check[x][y] = 1;
            que.push((node){x, y, ans[x][y]});
        }
    }
    return ;
}


void output() {
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if (j != 1) {
                cout << " ";
            }
            if (ans[i][j] == 0) {
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
    cout << endl;
    return ;
}

int main() {
    cin >> n >> m >> sx >> sy;
    bfs();
    output();
    return 0;
}
