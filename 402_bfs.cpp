/*************************************************************************
	> File Name: 402_bfs.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月19日 星期五 22时57分07秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

const int MAX_N = 200;

struct node{
    int h, step;
};

int n, A, B;
int nums[MAX_N + 5], check[MAX_N + 5];

void read() {
    cin >> n >> A >> B;
    for (int i = 1; i <= n; i++) {
        cin >> nums[i];
    }
    return ;
}

void bfs() {
    queue<node> que;
    que.push((node){A, 0});
    while(!que.empty()) {
        node tmp = que.front();
        que.pop();
        if (tmp.h == B) {
            cout << tmp.step << endl;
            return ;
        }

        int up = tmp.h + nums[tmp.h];
        int down = tmp.h - nums[tmp.h];
        if (up <= n && check[up] == 0) {
            check[up] = 1;
            que.push((node){up, tmp.step + 1});
        }
        if (down > 0 && check[down] == 0) {
            check[down] = 1;
            que.push((node){down, tmp.step + 1});
        }
    }
    cout << -1 << endl;
    return ;
}

int main() {
    read();
    bfs();
 
    return 0;
}
