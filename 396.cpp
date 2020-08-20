/*************************************************************************
	> File Name: 396.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月18日 星期二 15时54分42秒
 ************************************************************************/

#include<iostream>
using namespace std;

int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};
int mmap[35][35];
int n;

void func(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int xx = x + dir[i][0];
        int yy = y + dir[i][1];
        if (xx < 0 || yy < 0 || xx > n + 1 || yy > n + 1) {
            continue;
        }
        if (mmap[xx][yy] == 0) {
            mmap[xx][yy] = 2;
            func(xx, yy);
        }
    }
}

int main () {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> mmap[i][j];
        }
    }
    mmap[0][0] = 2;
    func(0, 0);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j != 1) {
                cout << " ";
            }
            if (mmap[i][j] == 2) {
                cout << 0;
            } else if (mmap[i][j] == 1) {
                cout << 1;
            } else {
                cout << 2;
            }
        }
        cout << endl;
    }
    return 0;
}
