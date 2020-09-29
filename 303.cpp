/*************************************************************************
	> File Name: 303.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月29日 星期二 18时03分33秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<queue>
#include<algorithm>
#include<cstdio>
using namespace std;

struct node {
    int x, y, step;
};

int n, m, ans[1005][1005];
char mmap[1005][1005];
int dir[4][2] = {1, 0, -1, 0, 0, 1, 0, -1};

int main() {
    queue<node> que;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == '1') {
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
            if (mmap[x][y] == '0') {
                ans[x][y] = tmp.step + 1;
                mmap[x][y] = 2;
                que.push((node){x, y, ans[x][y]});
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (j != 1) {
                cout << " ";
            }
            cout << ans[i][j];
        }
        cout << endl;
    }


    return 0;
}
