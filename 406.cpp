/*************************************************************************
	> File Name: 406.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月18日 星期二 14时46分42秒
 ************************************************************************/

#include<iostream>
using namespace std;

#define max_n 2000
char mmap[max_n + 5][max_n + 5];
int dir[8][2] = {0, 1, 0, -1, 1, 0, -1, 0, -1, 1, 1, 1, -1, -1, 1, -1};
int n ,m, ans;

void func(int x, int y) {
    for (int i = 0; i < 8; i++) {
        int xx = x + dir[i][0];
        int yy = y + dir[i][1];
        if (mmap[xx][yy] == '#') {
            mmap[xx][yy] = '.';
            func(xx, yy);
        }
    }
}

int main () {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
        }
    }
    

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (mmap[i][j] == '#') {
                ans += 1;
                mmap[i][j] == '.';
                func(i, j);
            }
        }
    }

    cout << ans << endl;
    return 0;
}
