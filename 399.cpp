/*************************************************************************
	> File Name: 399.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月04日 星期五 10时08分20秒
 ************************************************************************/

#include<iostream>
using namespace std;

int n, m, min_d = 2500;
int com_x, com_y, shop_x, shop_y;
char mmap[505][505];
int dir[4][2] = {0, 1, -1, 0, 0, -1, 1, 0};
int ans;
void  func(int x, int y, int ans) {
    for (int i = 0; i < 4; i++) {
        int xx = x + dir[i][0];
        int yy = y + dir[i][1];
        if (mmap[x][y] == '3') {
            ans + 1;
            return ;
        }
        if (mmap[xx][yy] == '.') {
            mmap[xx][yy] == '#';
            ans += 1;
            func(x, y, ans);
        }
        if (ans < min_d) min_d = ans;
    }
    return ;
}


int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == '2') {
                com_x = i;
                com_y = j;
            } 
            if (mmap[i][j] ==  '3') {
                com_x = i;
                com_y = j;
            }
        }
    }

    func(com_x, com_y, 0);
    cout << (ans ? ans : -1) << endl;
    return 0;
}
