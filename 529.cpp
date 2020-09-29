/*************************************************************************
	> File Name: 529.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月29日 星期二 20时30分33秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
using namespace std;

struct node {
    int x, y, step;
};

int n, m, cx, cy, ex, ey, check[150][150];
char mmap[150][150];
//int dir[8][2] = {0, 1, 1, 0, 0, -1,        1, 1, 1, -1, -1, 1, -1, -1, -1, 0};
  int dir[8][2] = {0, 1, 1, 0, 0, -1, -1, 0, 1, 1, 1, -1, -1, 1, -1, -1};

void bfs() {
    memset(check, 0, sizeof(check));
    for (int i = 0; i < 8; i++) {
        for (int j = 1; 1; j++) {
            int x = ex + dir[i][0] * j;
            int y = ey + dir[i][1] * j;
            if (mmap[x][y] == 'O') {
                check[x][y] = 1;
            } else {
                break;
            }
        }
    }

    check[ex][ey] = 1;
    if (check[cx][cy] == 1) {
        cout << 0 << endl;
        return ;
    }
    queue<node> que;
    que.push((node){cx, cy, 0});
    check[cx][cy] += 2;
    while(!que.empty()) {
        node tmp = que.front();
        que.pop();
        for (int i = 0; i < 4; i++) {
            int x = tmp.x + dir[i][0];
            int y = tmp.y + dir[i][1];
            if (check[x][y] == 1) {
                cout << tmp.step + 1 << endl;
                return ;
            }
            if (mmap[x][y] == 'O' && check[x][y] != 2) {
                check[x][y] = 2;
                que.push((node){x, y, tmp.step + 1});
            }
        }
    }
    cout << "Impossible!" << endl;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
        }
    }

    while(cin >> ex >> ey >> cx >> cy) {
        if (ex == 0) {
            break;
        }
        bfs();
    }
    return 0;
}
