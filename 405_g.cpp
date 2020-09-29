/*************************************************************************
	> File Name: 405_g.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月29日 星期二 19时43分16秒
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

int n, m, ans, sx, sy;
char mmap[3005][3005];
int dir[4][2] = {0, 1, 0, -1, 1, 0, -1, 0};

int main() {
    queue<node> que;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            mmap[i][j] -= '0' - 1;
        }
    }
    cin >> sx >> sy;
    que.push((node){sx,sy});
    ans = 1;
    mmap[sx][sy] = -mmap[sx][sy];
    while(!que.empty()) {
        node tmp = que.front();
        que.pop();
        for (int i = 0; i < 4; i++) {
            int x = tmp.x + dir[i][0];
            int y = tmp.y + dir[i][1];
            if (x < 1 || y < 1 || x > n || y > m || mmap[x][y] < 0 ||  abs(mmap[tmp.x][tmp.y])  == mmap[x][y]) continue;
            ans += 1;
            mmap[x][y] = -mmap[x][y];
            que.push((node){x, y});
        }
    }
    cout << ans << endl;
    return 0;
}
