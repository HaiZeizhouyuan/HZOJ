/*************************************************************************
	> File Name: 304_bfs.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月19日 星期五 21时43分27秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
const int MAX_N = 150;

struct node{
    int x, y, step;
};

int n, m;
char mmap[MAX_N + 5][MAX_N + 5];
int dir[8][2] = {1, 2, 2, 1, -1, 2, -2, 1, -2, -1, -1, -2, 1, -2, 2, -1};
queue<node> que;
void read() {
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == 'K') {
                que.push((node){i, j, 0});
            }
        }
    }
    return ;
}

void bfs() {
    while(!que.empty()) {
        node temp = que.front();
        que.pop();
        for (int i = 0; i < 8; i++) {
            int x = temp.x + dir[i][0];
            int y = temp.y + dir[i][1];
            if (x <= 0 || y <= 0 || x > n || y > m || mmap[x][y] == '*') continue;
            if (mmap[x][y] == 'H') {
                cout << temp.step + 1 << endl;
                return ;
            }
            if (mmap[x][y] == '.') {
                mmap[x][y] = '*';
                que.push((node){x, y, temp.step + 1});
            }
        }
    }
    cout << -1 << endl;
    return ;
}

int main() {
    read();
    bfs();
 
    return 0;
}
