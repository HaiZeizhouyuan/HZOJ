/*************************************************************************
	> File Name: 641.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月19日 星期四 18时29分30秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
struct edge {
    int e, next;
};

struct my_int {
    int x;
    bool operator< (const my_int &b) const {
        return this->x > b.x;
    }
};


edge edg[400005];
int n, m, in_degree[2005], head[2005];

int main() {
    memset(head, -1, sizeof(head));
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        edg[i].e = b;
        edg[i].next = head[a];
        head[a] = i;
        in_degree[b]++;
    }

    priority_queue<my_int> que;
    for (int i = 1; i <= n; i++) {
        if (in_degree[i] == 0) {
            que.push((my_int){i});
        }
    }

    int flag = 0;
    while(!que.empty()) {
        my_int temp = que.top();
        que.pop();
        if(flag == 1) {
            cout << " ";
        }
        flag = 1;
        cout << temp.x;
        for (int i = head[temp.x]; i != -1; i = edg[i].next) {
            int e = edg[i].e;
            in_degree[e]--;
            if (in_degree[e] == 0) {
                que.push((my_int){e});
            }
        }
    }
    cout << endl;

 
    return 0;
}
