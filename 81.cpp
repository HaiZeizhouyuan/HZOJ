/*************************************************************************
	> File Name: 81.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月12日 星期三 20时14分44秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 2000

int dir[4][2] = {1, 0, 0, 1, 0, -1,-1, 0};
char mmap[max_n + 5][max_n + 5];
int sx, sy, ex, ey, xx, yy, n, m, min_n;

int dfs(int x, int y, char s) {
    for (int i = 0; i < 4; i++) {
        xx = x + dir[i][0];
        yy = y + dir[i][1];
        if (mmap[xx][yy] == s) {
            sum ++;
            return sum;
        }
        if (mmap[xx][yy] == '.') {
            sum += 1;
            mmap[xx][yy] = '#';
            int t = dfs(xx, yy)  + 1;
            if (t) {
                if (t < min_n) {
                    min_n = t;
                }
            }
        }
    }
    return 0;
    
}

int main () {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == 'S') {
                sx = i;
                sy = j;
            } 
            if (mmap[i][j] == 'P') {
                ex = i;
                ey = j;
            }

            if (mmap[i][j] == '.') {
                min_n++;
            }
        }
    }
    int re = dfs(sx, sy, P);
    re += dfs(ex, ey, );
    if (re) {
        cout << "yes" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
