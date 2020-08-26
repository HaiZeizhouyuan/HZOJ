/*************************************************************************
	> File Name: 385.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月26日 星期三 09时55分56秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<queue>
#include<cstdio>
using namespace std;

typedef struct pople {
    int t, c;
} pople;

pople p;

int n, p_num, f_num, tmp_t, tmp_p, cou_sum;
int mark[100005];

int main() {
    queue<pople> que;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &tmp_t, &tmp_p);
        while (!que.empty()) {
            p = que.front();
            if (tmp_t - p.t < 86400) break;
            que.pop();
            mark[p.c] -= 1;
            if (mark[p.c] == 0) cou_sum -= 1;
        }

        for (int j = 0; j < tmp_p; j++) {
            int temp;
            scanf("%d", &temp);
            que.push((pople){tmp_t, temp});
            if (mark[temp] == 0) cou_sum += 1;
            mark[temp] += 1;
        }
        printf("%d\n", cou_sum);
    }
    return 0;
}

