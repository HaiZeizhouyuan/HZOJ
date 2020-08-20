/*************************************************************************
	> File Name: 536.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月18日 星期二 15时19分22秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 100

string str[max_n + 5];
char mmap[max_n + 5][max_n + 5];
int dir[4][2] = {-1, 0, 0, 1, 1, 0, 0, -1}; 
int n, m, temp, ans;

void func(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int xx = x + dir[i][0];
        int yy = y + dir[i][1];
        if (mmap[xx][yy] == '1' ) {
            mmap[xx][yy] = '0';
            temp += 1;
            func(xx, yy);
        }
    }
    return ;
}

int main () {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> (&mmap[i][0]);
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mmap[i][j] == '1') {
                mmap[i][j] = '0';
                temp = 1;
                func(i, j);
                ans = max(ans, temp);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
