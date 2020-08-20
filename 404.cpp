/*************************************************************************
	> File Name: 404.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月18日 星期二 16时13分13秒
 ************************************************************************/

#include<iostream>
using namespace std;

int dir[4][2] = {0,1,1,0,0,-1,-1,0};
char mmap[3005][3005], check[3005][3005];
int n, m, sx, sy, ans;

void func(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int xx = x + dir[i][0];
        int yy = y + dir[i][1];
        if (xx < 1 || yy < 1 || xx > n || yy > m) {
            continue;
        }
        if (mmap[xx][yy] != mmap[x][y] && check[xx][yy] == 0) {
            ans ++;
            check[xx][yy]= 1;
            func(xx, yy);
        }
    }
}

int main () {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> (&mmap[i][1]);
    }
    cin >> sx >> sy;
    ans = 1;
    check[sx][sy] = 1;
    func(sx, sy);
    cout << ans << endl;
    return 0;
}
