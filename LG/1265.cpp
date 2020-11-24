/*************************************************************************
	> File Name: 1265.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月17日 星期二 18时15分50秒
 ************************************************************************/

#include<algorithm>
#include<iostream>
#include <cmath>
#include<cstring>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
struct node{
    int now;
    double val;
    bool operator< (const node &b) const {
        return this->val > b.val;
    }
};

int n, xy[5005][2], mark[5005];
double ans, dis[5005];

double func(int a, int b) {
    double xx = xy[a][0] - xy[b][0], yy = xy[a][1] - xy[b][1];
    return sqrt(xx * xx + yy * yy);
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> xy[i][0] >> xy[i][1];
        dis[i] = 999999;
    }
    int already = 0;
    priority_queue <node> que;
    que.push((node){1, 0});
    dis[1] = 0;
    while(!que.empty()) {
        node temp = que.top();
        que.pop();
        if (mark[temp.now] == 1) continue;
        
        mark[temp.now] = 1;
        ans += temp.val;
        already++;
        if (already == n) break;

        for (int i = 1; i <= n; i++) {
            if (i == temp.now) {
                continue;
            }
            double t = func(i, temp.now);
            if (t < dis[i]) {
                dis[i] = t;
                que.push((node){i, t});
            }
        }
    }
    printf("%.2f\n", ans);
    return 0;
}
