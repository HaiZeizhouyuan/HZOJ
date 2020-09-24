/*************************************************************************
	> File Name: 590.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月24日 星期四 20时38分19秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
 
int n, m, num[1005][1005], utd[1005][1005], dtu[1005][1005], sum[1005][1005], ans[1005][3];//0 max 1 max_cnt 2 second

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            scanf("%d", &num[i][j]);
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            utd[i][j] = max(utd[i - 1][j - 1], utd[i - 1][j])  + num[i][j];
        }
    }
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            dtu[i][j] = max(dtu[i + 1][j + 1], dtu[i + 1][j]) + num[i][j];
            sum[i][j] = utd[i][j] + dtu[i][j] - num[i][j];
        }
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (sum[i][j] > ans[i][0]) {
                ans[i][0] = sum[i][j];
                ans[i][1] = j;
            }
        }
        for (int j = 1; j <= i; j++) {
            if (j != ans[i][1] && sum[i][j] > ans[i][2]) {
                ans[i][2] = sum[i][j];
            }
        }
    }
    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d%d", &a, &b);
        if (a == 1 && b == 1) {
            printf("-1\n");
        } else {
            if (ans[a][1] == b) {
                printf("%d\n",ans[a][2]);
            } else {
                printf("%d\n", ans[a][0]);
            }
        }
    }
 
    return 0;
}
