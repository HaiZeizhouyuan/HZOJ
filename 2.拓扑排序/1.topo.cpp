/*************************************************************************
	> File Name: 1.topo.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月28日 星期日 21时42分28秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include <stack>
#include<vector>
using namespace std;

struct edge {
    int e, next;
};

class Topu{
public:
    Topu(int node_num, int edg_num, int s, int e):node_num(node_num), edg_num(edg_num), s(s), e(e){
        head = vector<int>(node_num, -1);
        in_degree = vector<int>(node_num, 0);
        edg = vector<edge>(edg_num);
    }

    void build(int i, int a, int b) {
        edg[i].e = b;
        edg[i].next = head[a];
        head[a] = i;
        in_degree[b]++;
        return ;
    }

    void slove() {
        for (int i = s; i <= e; i++) {
            if (in_degree[i] == 0) {
                //que.push(i);
                sta.push(i);
            }
        }
        while (!sta.empty()) {
            //int t = que.front();
            int t = sta.top();
            //que.pop();
            sta.pop();
            res.emplace_back(t);
            for (int i = head[t]; i != -1; i = edg[i].next) {
                int e = edg[i].e;
                in_degree[e]--;
                if (in_degree[e] == 0) {
                    //que.push(e);
                    sta.push(e);
                }
            }
        }
        return ;
    }

    void output() {
        for (auto i : res) {
            cout << i << "-";
        }
        cout << endl;
    }

private:
    int node_num, edg_num;
    int s, e;
    queue<int> que;
    stack<int> sta;
    vector<int> head;
    vector<int> in_degree;
    vector<edge> edg;
    vector<int> res;
};

int main() {
    int n, m;
    cin >> n >> m;
    if (n == 0 || m == 0) return 0;
    Topu t(n, m, 1, n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        t.build(i, a, b);
    }

    t.slove();
    t.output();
    
    return 0;
}
