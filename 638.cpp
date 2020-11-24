/*************************************************************************
	> File Name: 636.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月19日 星期四 19时40分44秒
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

edge edg[50005];
int n, m, head[1505], in_degree[1505], ans[1505];

int func() {
    int mark[1505] = {0, 1};
    queue<int> que;
    que.push(1);
    while(!que.empty()) {
        int t = que.front();
        que.pop();
        for (int i = head[t]; i != -1; i = edg[i].next) {
            int e = edg[i].e;
            if (e == n) return 0;
            if (mark[e] == 0){
                mark[e] = 1;
                que.push(e);
            }

        }
    }
}

int main() {
    memset(head, -1, sizeof(head));
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        edg[i].e = b;
        edg[i].v = c;
        edg[i].next = head[a];
        head[a] = i;
        in_degree[b]++;
    }
    
    if (func()) {
        cout << -1 << endl;
        return 0;
    }

    queue<int> que;
    for (int i = 1; i <= n; i++) {
        if (in_degree[i] == 0) {
            que.push(i);
        }
        ans[i] = -2100000000;
    }
    ans[1] = 0;
    while(!que.empty()) {
        int temp = que.front();
        que.pop();
        for (int i = head[temp]; i != -1; i = edg[i].next) {
            int e = edg[i].e, d = edg[i].v;
            ans[e] = max(ans[e], ans[temp] + d);
            in_degree[e]--;
            if (in_degree[e] == 0) {
                que.push(e);
            }
        }
    }
    cout << ans[n] << endl;
 
    return 0;
}
