/*************************************************************************
	> File Name: 401.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月29日 星期二 19时24分58秒
 ************************************************************************/

#include<iostream>
#include<queue>
using namespace std;
 
struct node {
    int x, y, step;
};

int ans[505][505], n;
int dir[12][2] = {
    1, 2, 1, -2, -1, 2, -1, -2,
    2, 1, 2, -1, -2, 1, -2, -1, 
    2, 2, 2, -2, -2, 2, -2, -2
};

int main() {
    queue<node> que;
    que.push((node){3, 3, 0});
    ans[3][3] = -1;
    while(!que.empty()) {
        node tmp = que.front();
        que.pop();
        for (int i = 0; i < 12; i++) {
            int x = tmp.x + dir[i][0];
            int y = tmp.y + dir[i][1];
            if (x < 3 || y < 3 || x > 502 || y > 502 || ans[x][y]) {
                continue;
            }
            ans[x][y] = tmp.step + 1;
            que.push((node){x, y, ans[x][y]});
        }
    }

    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (x == 1 && y == 1) {
            cout << 0 << endl;
        } else {
            cout << ans[x + 2][y + 2] << endl;
        }
    }
    return 0;
}
