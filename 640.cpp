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
    int e, next;

};

edge edg[500005];
int n, m, head[5005], in_degree[5005], out_degree[5005], ans[500005];

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
        out_degree[a]++;
    }

    queue<int> que;
    for (int i = 1; i <= n; i++) {
        if (in_degree[i] == 0) {
            que.push(i);
            ans[i] = 1;
        }
    }
    int sum = 0;
    while(!que.empty()) {
        int temp = que.front();
        que.pop();
        if (out_degree[temp] == 0) sum += ans[temp];
        for (int i = head[temp]; i != -1; i = edg[i].next) {
            int e = edg[i].e;
            in_degree[e] -= 1;
            ans[e] += ans[temp];
            ans[e] %= 100000007;
            if (in_degree[e] == 0) {
            que.push(e);
            }
        }
    }
    cout << sum << endl;
 
    return 0;
}
