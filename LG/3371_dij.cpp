/*************************************************************************
	> File Name: 3371_dij.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月18日 星期三 10时21分38秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

struct node {
    int now, dist;
    bool operator < (const node &b) const{
        return this->dist > b.dist;
    }
};

struct edge {
    int e, dist, next;
};

edge edg[500005];

int n, m, s, ans[100005], head[100005];

int main() {
    memset(head, -1, sizeof(head));
    memset(ans, 0x3F, sizeof(ans));
    cin >> n >> m >> s;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        head[i].e = b;
        head[i].dist =c;
        head[i].next = head[a];
        head[a] = i;
    }

    priority_queue<node> que;
    que.push((node){s, 0});
    while(!que.empty()) {
        node temp = que.top();
        que.pop();
        if (ans[temp.now] > temp.dist) {
            ans[temp.now] = temp.dist;
        } else {
            continue;
        }
        for (int i = head[temp.now]; i != -1; i = edg[i].next) {
            int e = edg[i].e, d = edg[i].dist;
            if (ans[e] > ans[temp.now] + d) {
                que.push((node){e, ans[temp.now] + d});
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (i != 1) cout << " ";
        if (ans[i] == 0x3F3F3F3F) {
            cout << 0x7FFFFFFF;
        } else {
            cout << ans[i];
        }
    }
    cout << endl;


 
    return 0;
}
