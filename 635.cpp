/*************************************************************************
	> File Name: 635.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月19日 星期四 19时04分15秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
struct edge {
    int e, v, next;
};

edge edg[10005];
int n, m,head[105],in_degree[105], out_degree[105], c[105], u[105];

int main() {
    memset(head, -1, sizeof(head));
    cin >> n >> m;
    queue<int> que;
    for (int i = 1; i <= n; i++) {
        cin >> c[i] >> u[i];
        if (c[i] != 0) {
            que.push(i);
        }
    }
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        edg[i].e = b;
        edg[i].v =c;
        edg[i].next = head[a];
        head[a] = i;
        in_degree[b]++;
        out_degree[a]++;
    }
    while(!que.empty()) {
        int temp = que.front();
        que.pop();
        for (int i = head[temp];  i != -1; i = edg[i].next) {
            int e = edg[i].e,  v = edg[i].v;
            if (c[temp] > 0) {
                c[e] += c[temp] * v;
            }
            in_degree[e]--;
            if (in_degree[e] == 0) {
                que.push(e);
                c[e] -= u[e];
            }
        }
    }
    int f = 0;
    for (int i = 1; i <= n; i++) {
        if (out_degree[i] == 0 && c[i] > 0) {
            f = 1;
            cout << i << " " << c[i] << endl;
        }
    }
    if (f == 0) {
        cout << "NULL" << endl;
    }
    return 0;
}
