/*************************************************************************
	> File Name: 305.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月29日 星期二 18时44分38秒
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

int n, m, sx, sy, ans;
int dir[8][2] = {0, 1, 0, -1, 1, 1, 1, 0, 1, -1, -1, 1, -1, 0, -1, -1};
char mmap[105][105];

int main() {
    cin >> m >> n >> sy >> sx;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
        }
    }

    queue<node> que;
    que.push((node){n - sx + 1, sy, 0});
    mmap[n -sx + 1][sy] = 'M';
    
    while(!que.empty()) {
        node tmp = que.front();
        que.pop();
        ans = max(ans, tmp.step);
        for (int i = 0; i < 8; i++) {
            int x = tmp.x + dir[i][0];
            int y = tmp.y + dir[i][1];
            if (mmap[x][y] == '.') {    
                mmap[x][y] = 'M';
                que.push((node){x, y, tmp.step + 1});
            }
        }
    }
    cout << ans << endl;
    return 0;
}
