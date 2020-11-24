/*************************************************************************
	> File Name: 4047.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月17日 星期二 19时31分24秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include <cmath>
#include<queue>
#include<vector>
using namespace std;

struct edge {
    int s, e;
    double v;
};

edge edg[500005];

int n, k, edg_cnt, xy[1005][2], my_union[1005];


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
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> xy[i][0] >> xy[i][1];
        my_union[i] = i;
        for (int j = 1; j < i; j++) {
            double xx = xy[i][0] - xy[j][0], yy = xy[i][1] - xy[j][1];
            double t = sqrt(xx * xx + yy * yy);
            edg[edg_cnt].s = i;
            edg[edg_cnt].e = j;
            edg[edg_cnt++].v = t;
        }
    }
    sort(edg, edg + edg_cnt, cmp);
    int already = 0, f = 0;
    for (int i = 0; i < edg_cnt; i++) {
        int fs = find_union(edg[i].s), fe = find_union(edg[i].e);
        if (fs != fe) {
            if (f == 1) {
                printf("%.2f\n", edg[i].v);
                break;
            }
            my_union[fs] = fe;
            already++;
            if (already == n - k) {
                f = 1;
            }
        }
    }
 
    return 0;
}
