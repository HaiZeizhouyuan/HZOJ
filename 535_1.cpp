/*************************************************************************
	> File Name: 535_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月24日 星期四 18时21分22秒
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

int n, m, ans;
char mmap[60][60];
int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};
int main() {
    cin >> m >> n;
    queue<node> que;
    for (int i = 1; i  <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == '@') {
                que.push((node){i, j});
            }
        }
    }

    while(!que.empty()) {
        node temp = que.front();
        que.pop();
        for (int i = 0; i < 4; i++) {
            int x  = temp.x + dir[i][0];
            int y = temp.y + dir[i][1];
            if (mmap[x][y] == '.') {
                ans++;
                que.push((node){x, y});
                mmap[x][y] = '#';
            }
        }
    }
    cout << ans + 1 << endl;
 
    return 0;
}
