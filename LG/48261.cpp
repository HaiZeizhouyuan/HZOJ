/*************************************************************************
	> File Name: 48261.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月17日 星期二 20时51分05秒
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

struct node {
    int now, val;
    bool operator< (const node &b) const {
        return this->val > b.val;
            
    }

};

edge edg[400005];
int n, m, edg_cnt, head[5005], ans, already, dis[2005], mark[5005], num[];

void add_edge(int s, int e, int v) {
    edg[edg_cnt].e = e;
    edg[edg_cnt].v = v;
    edg[edg_cnt].next = head[s];
    head[s] = edg_cnt++;
}

int main() {
    memset(dis, 0x3F, sizeof(dis));
    memset(head, -1, sizeof(head));
    cin >> n;
    for (int i = 0; i < n; i++) {

        int a, b, c;
        cin >> a >> b >> c;
        add_edge(a, b, c);
        add_edge(b, a, c);
                
    }
    priority_queue<node> que;
    que.push((node){1, 0});
    while (!que.empty()) {
        node temp = que.top();
        que.pop();
        if (mark[temp.now] == 1) continue;
        mark[temp.now] = 1;
        ans += temp.val;
        already++;
        if (already == n) break;
        for (int i = head[temp.now]; i != -1; i = edg[i].next) {
            int e = edg[i].e, v = edg[i].v;
            if (mark[e] == 0 && dis[e] > v) {
            dis[e] = v;
                que.push((node){e, v});
                                
            }
                        
        }
                
    }
    cout << ans << endl;
    return 0;
}
