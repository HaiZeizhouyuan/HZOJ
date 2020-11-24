/*************************************************************************
	> File Name: 675.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月24日 星期二 18时12分51秒
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

edge edg[100005];
int m, n, c, ans[100005], head[100005], in_degree[100005];

int main() {
    memset(head, -1, sizeof(head));
    cin >> n >> m >> c;
    for (int i = 1; i <= n; i++) {
        cin >> ans[i];
    }

    for (int i = 0; i < c; i++) {
        int a, b, x;
        cin >> a >> b >> x;
        edg[i].e = b;
        edg[i].v = x;
        edg[i].next = head[a];
        head[a] = i;
        in_degree[b]++;
    }
    queue<int> que;
    for (int i = 1; i <= n; i++) {
        if (in_degree[i] == 0) {
            que.push(i);
        }
    }
    while(!que.empty()){
        int temp = que.front();
        que.pop();
        for (int i = head[temp]; i != -1; i = edg[i].next) {
            int e = edg[i].e, v = edg[i].v;
            ans[e] = max(ans[e], ans[temp] + v);
            in_degree[e]--;
            if (in_degree[e] == 0) {
                que.push(e);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
