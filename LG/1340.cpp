/*************************************************************************
	> File Name: 1340.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月17日 星期二 18时41分23秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

struct edge {
    int s, e, v, mtime;
};

edge edg[6005];
int n, m, my_union[205];

bool cmp(const edge &a, const edge &b) {
    return a.v < b.v;
}

void init_union() {
    for (int i = 1; i <= n;i++) {
        my_union[i] = i;
    }
}

int find_union(int x) {
    if (my_union[x] == x) {
        return x;
    }
    return my_union[x] = find_union(my_union[x]);
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> edg[i].s >> edg[i].e >> edg[i].v;
        edg[i].mtime = i;
    }

    sort(edg, edg + m , cmp);
    for (int i = 0; i < m; i++) {
        int already = 1, ans = 0;
        init_union();
        for (int j = 0; j < m; j++) {
            if (edg[j].mtime <= i) {
                int fs = find_union(edg[j].s), fe = find_union(edg[j].e);
                if (fs != fe) {
                    my_union[fs] = fe;
                    ans += edg[j].v;
                    already++;
                    if (already == n) break;
                }
            }
        }
        if (already == n) {
            cout << ans << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
