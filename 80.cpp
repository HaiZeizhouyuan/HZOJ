/*************************************************************************
	> File Name: 80.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月24日 星期一 21时50分08秒
 ************************************************************************/

#include<iostream>
using namespace std;

int n, m, sx, sy, ex, ey, sum;
char mmap[505][505];
int dir[4][2] = {1, 0, 0, 1, 0, -1, -1, 0};

int func(int sx, int sy) {
    if ((sx == ex) && (sy == ey)) {
        return sum;
    }
    for (int i = 0; i < 4; i++) {
        int xx = sx + dir[i][0];
        int yy = sy + dir[i][1];
        if (mmap[xx][yy] == '.') {
            sum++;
            int tmp = func(xx, yy);
            if (tmp < sum) sum = tmp;
        }
    }
}

int main () {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mmap[i][j];
            if (map[i][j] == 's') {
                sx = i;
                sy = j;
            }
            if (mmap[i][j] == 'g') {
                ex = i;
                ey = j;
            }
        }
    }

    func(sx, sy);
    return 0;
}
