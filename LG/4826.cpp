/*************************************************************************
	> File Name: 4826.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月17日 星期二 20时11分00秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
struct edge {
    int s, e, v;
};

edge edg[2000005];
int n, num[2005], my_union[2005], edg_cnt;
long long ans;

bool cmp(const edge &a, const edge &b) {
    return a.v > b.v;
}

int find_union(int x) {
    if (my_union[x] == x) {
        return x;        
    }
    return my_union[x] = find_union(my_union[x]);
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
        my_union[i] = i;
        for (int j = 1; j < i; j++) {
            edg[edg_cnt].s = i;
            edg[edg_cnt].e = j;
            edg[edg_cnt++].v = num[i] ^ num[j];
        }
    }

    sort(edg, edg + edg_cnt, cmp);
    int already = 1;
    for (int i = 0; i < edg_cnt; i++) {
        int fs = find_union(edg[i].s), fe = find_union(edg[i].e);
        if (fs != fe) {
            ans += edg[i].v;
            already++;
            my_union[fs] = fe;
            if (already == n) {
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
