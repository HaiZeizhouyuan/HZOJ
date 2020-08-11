/*************************************************************************
	> File Name: DFS_Easy.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: Tue Aug 11 20:38:27 2020
 ************************************************************************/

#include<iostream>
using namespace std;

char mmap[2005][2005];
int dir[4][2] = {1, 0, 0, 1, 0, -1, -1, 0};
int n, m, sx, sy, ex, ey;

int dfs(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int xx = x + dir[i][0];
        int yy = y + dir[i][1];
        if (mmap[xx][yy] == 'g') {
            return 1;
        }
        if (mmap[xx][yy] == '.') {
            mmap[xx][yy] = '#';
            int t = dfs(xx, yy);
            if (t == 1) {
                return 1;
            }
        }
    }
    return 0;
}

int main () {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++){
            cin >> mmap[i][j];
            if (mmap[i][j] == 's') {
                sx = i;
                sy = j;
            }
            if (mmap[i][j] == 'g') {
                ex = i;
                ey = j;
            }
        }
    }
    int t = dfs(sx, sy);
    if (t == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
