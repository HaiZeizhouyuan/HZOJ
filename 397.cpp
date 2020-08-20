/*************************************************************************
	> File Name: 397.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月18日 星期二 14时29分14秒
 ************************************************************************/

#include<iostream>
using namespace std;

int dir[4][2] = {0,1,1,0, 0,-1,-1,0};
int mmap[105][105];
int n, m, ans;

void func(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int xx = x + dir[i][0];
        int yy = y + dir[i][1];
        if(mmap[xx][yy] != 0) {
            mmap[xx][yy] = 0;
            func(xx, yy);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (mmap[i][j] != 0) {
                ans += 1;
                mmap[i][j] = 0;
                func(i, j);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
