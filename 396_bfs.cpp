/*************************************************************************
	> File Name: 396_bfs.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月19日 星期五 19时44分23秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

#define MAX_N 30

struct node{
    int x, y;
};

int n;
int mmap[MAX_N + 5][MAX_N + 5];
int dir[4][2] = {0, 1, 0, -1, 1, 0, -1, 0};
void read() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> mmap[i][j];
        }
    }
}

void bfs() {
    queue<node> que;
    que.push((node){0, 0});
    mmap[0][0] = 3;
    while(!que.empty()) {
        node tmp = que.front();
        que.pop();
        for (int i = 0; i < 4; i++) {
            int x = tmp.x + dir[i][0];
            int y = tmp.y + dir[i][1];
            if (x < 0 || y < 0 || x > n + 1 || y > n + 1) {
                continue;
            }
            if (mmap[x][y] == 0) {
                mmap[x][y] = 3;
                que.push((node){x, y});
            }
        }
    }
    return ;
}

void output() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j != 1) {
                cout << " ";
            }
            if (mmap[i][j] == 3) {
                cout << 0;
            } else if (mmap[i][j] == 1) {
                cout << 1;
            } else {
                cout << 2;
            }
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    read();
    bfs();
    output();
 
    return 0;
}
