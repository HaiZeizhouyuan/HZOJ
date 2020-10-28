/*************************************************************************
	> File Name: LG_3371_2.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年10月27日 星期二 20时40分21秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
using namespace std;

struct edge {
    int e, dist, next;
};

edge edg[1005];
int n, m, head[105];

int main() {
    memset(head,  -1, sizeof(head));
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        edg[i].e = b;
        edg[i].dist = c;
        edg[i].next = head[a];
        head[a] = i;
    }

    for (int i = 1; i <= n; i++) {
        cout << i << " : ";
        for (int j = head[i]; j != -1; j = edg[j].next) {
            cout << "(" << edg[j].e << ", " << edg[j].dist << ") ";
        }
        cout << endl;
    }
    return 0;
}
