/*************************************************************************
	> File Name: topo.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月19日 星期四 18时15分28秒
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

edge edg[10005];

int n, m, head[10005], in_degree[10005];

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
    queue<int> que;
    //stack<int> sta;
    for (int i = 1; i <= n; i++) {
        if (in_degree[i] == 0) {
            que.push(i);
            //sta.push(i);
        }
    }

    while(!que.empty()) {
        int t = que.front();
        que.pop();
        //sta.pop();
        cout << t << "-";
        for (int i = head[t];  i != -1; i = edg[i].next) {
            int e = edg[i].e;
            in_degree[e]--;
            if (in_degree[e] == 0) {
                que.push(e);
                //sta.push();
            }
        }
    }
    cout << endl;
    return 0;
}
