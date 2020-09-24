/*************************************************************************
	> File Name: 80.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月24日 星期一 21时50分08秒
 ************************************************************************/

#include<iostream>
#include<queue>
using namespace std;

struct node {
    int x, y, step;
};

int n, m;
char mmap[505][505];
int dir[4][2] = {1, 0, 0, 1, 0, -1, -1, 0};

int main () {
    queue<node> que;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == 's') {
                que.push((node){i, j, 0});
            }
        }
    }

    while(!que.empty()) {
        node tmp = que.front();
        que.pop();
        for (int i = 0; i < 4; i++) {
            int x = tmp.x + dir[i][0];
            int y = tmp.y + dir[i][1];
            if (mmap[x][y] == 'g') {
                cout << tmp.step + 1 << endl;
                return 0;
            }
            if (mmap[x][y] == '.') {
                que.push((node){x, y, tmp.step + 1});
                mmap[x][y] = '1';
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
