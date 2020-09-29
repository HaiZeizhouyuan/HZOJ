/*************************************************************************
	> File Name: 304.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月29日 星期二 18时18分25秒
 ************************************************************************/

#include<iostream>
#include<queue>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;

struct node {
    int x, y, step;
};
int n, m;
char mmap[155][155];
int dir[8][2] = {1, 2, 1, -2, -1, 2, -1, -2, 2, 1, 2, -1, -2, -1, -2, 1};

int main() {
    queue<node> que;
    cin >> m >> n;
    for (int i  = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == 'K') {
                que.push((node){i, j, 0});
            }
        }
    }

    while(!que.empty()) {
        node tmp = que.front();
        que.pop();
        for (int i = 0; i < 8; i++) {
            int x = tmp.x + dir[i][0];
            int y = tmp.y + dir[i][1];
            if (x < 1 || y < 1 || x > n || y > m) continue;
            if (mmap[x][y] == 'H') {
                cout << tmp.step + 1 << endl;
                return 0;
            }
            if (mmap[x][y] == '.') {
                mmap[x][y] = '*';
                que.push((node){x, y, tmp.step + 1});
            }
        }
    }
    cout << -1 << endl;
    return 0;
}
