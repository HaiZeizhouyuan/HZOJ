/*************************************************************************
	> File Name: 528_bfs.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月19日 星期五 22时32分23秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

const int MAX_N = 100;

struct node{
    int now, step;
};

int n, x, y, num[MAX_N + 5][MAX_N + 5], check[MAX_N + 5];

void read() {
    cin >> n >> x >> y;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> num[i][j];
        }
    }
    return ;
}

void bfs() {
    queue<node> que;
    que.push((node){x, 0});
    check[x] = 1;
    while(!que.empty()) {
        node tmp = que.front();
        que.pop();
        for (int i = 1; i <= n; i++) {
            if (i == y && num[tmp.now][y] == 1) {
                cout << tmp.step << endl;
                return ;
            }
            if (num[tmp.now][i] == 1 && check[i] == 0) {
                check[i] = 1;
                que.push((node){i, tmp.step + 1});
            }
        }
    }
    cout << 0 << endl; 
}

int main() {
    read();
    bfs();
    
    return 0;
}
