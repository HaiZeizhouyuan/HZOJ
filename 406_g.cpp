/*************************************************************************
	> File Name: 397_g.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月24日 星期四 18时51分54秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include <queue>
using namespace std;
 
struct node {
    int x, y;
};

int n, m, ans;
char mmap[2005][2005];
int dir[8][2] = {0, -1, 0, 1, 1, 0, -1, 0, 1, 1, 1, -1, -1, 1, -1, -1};

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m;j++) {
            cin >> mmap[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (mmap[i][j] == '#') {
                ans++;
                queue<node> que;
                que.push((node){i, j});
                mmap[i][j] = '.';
                while(!que.empty()) {
                    node tmp = que.front();
                    que.pop();
                    for (int k = 0; k < 8; k++) {
                        int x =  tmp.x + dir[k][0];
                        int y = tmp.y + dir[k][1];
                        if (mmap[x][y] == '#') {
                            mmap[x][y] = '.';
                            que.push((node){x, y});
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
