/*************************************************************************
	> File Name: 80_bfs.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月19日 星期五 20时44分11秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 500

struct node {
    int x, y, step;
};

int n, m;
char mmap[MAX_N + 5][MAX_N + 5];
int dir[4][2] = {1, 0, 0, 1, 0, -1, -1, 0};
queue<node> que;

void read() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == 's') {
                que.push((node){i, j, 0});
            }
        }
    }
    return ;
}

void bfs() {
    while (!que.empty()) {
        node tmp = que.front();
        que.pop();
        for (int i = 0; i < 4; i++) {
            int x = tmp.x + dir[i][0];
            int y = tmp.y + dir[i][1];
            if (mmap[x][y] == 'g') {
            cout << tmp.step + 1 << endl;
                return ;
            }
            if (mmap[x][y] == '.') {
                que.push((node){x, y, tmp.step + 1});
                mmap[x][y] = '1';
            }
        }
    }
    cout << "No" << endl;
    return ;
}

int main() {
    read();
    bfs();

    return 0;
}
