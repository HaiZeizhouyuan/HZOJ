/*************************************************************************
	> File Name: 530.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年10月13日 星期二 18时43分56秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
using namespace std;

struct node {
    int x, y;
};

int n, m, z, check[55][55];
char mmap[55][55];
int dir[4][2] = {0, 1, 0, -1, 1, 0, -1, 0};

int main() {
    cin >> n >> m;
    queue<node> que;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == '*') {
                que.push((node){i, j});
                mmap[i][j] = '.';
                check[i][j] = 1;
            }
        }
    }

    cin >> z;
    while(z--) {
        char d[10];
        cin >> d;
        int dir_num, qsize = que.size();
        if (d[0] == 'E') {
            dir_num = 0;
        } else if (d[0] == 'W') {
            dir_num = 1;
        } else if (d[0] == 'S') {
            dir_num = 2;
        } else {
            dir_num = 3;
        }
        memset(check, 0, sizeof(check));
        for (int i = 0; i < qsize; i++) {
            node tmp = que.front();
            que.pop();
            for (int j = 1; 1; j++) {
                int x = tmp.x + j * dir[dir_num][0];
                int y = tmp.y + j * dir[dir_num][1];
                if (mmap[x][y] != '.') {
                    break;
                }
                if (check[x][y] == 0) {
                    check[x][y] = 1;
                    que.push((node){x, y});
                }
            }
        }
    }
    while(!que.empty()) {
        node tmp = que.front();
        que.pop();
        mmap[tmp.x][tmp.y] = '*';
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << mmap[i][j];
        }
        cout << endl;
    }
    return 0;
}
