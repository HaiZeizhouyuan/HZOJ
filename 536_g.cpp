/*************************************************************************
	> File Name: 536_g.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月24日 星期四 19时25分37秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
using namespace std;
 
struct node {
    int x,y;
};


int n, m, ans;
char mmap[105][105];
int dir[4][2] = {1, 0, -1, 0, 0, 1, 0 , -1};
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (mmap[i][j] == '1') {
                queue<node> que;
                que.push((node){i, j});
                int t = 1;
                mmap[i][j] = 0;
                while(!que.empty()) {
                    node tmp = que.front();
                    que.pop();
                    for (int k = 0; k < 4; k++) {
                        int x = tmp.x + dir[k][0];
                        int y = tmp.y + dir[k][1];
                        if (mmap[x][y] == '1') {
                            t++;
                            mmap[x][y] = 0;
                            que.push((node){x, y});
                        }
                    }
                }
                ans = max(ans, t);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
