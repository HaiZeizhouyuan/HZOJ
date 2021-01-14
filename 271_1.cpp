/*************************************************************************
	> File Name: 271_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年01月14日 星期四 15时30分35秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 300000
int q[MAX_N + 5], head = 0, tail = 0;
int val[MAX_N + 5];

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> val[i];
    }

    for (int i = 1; i <= n; i++) {
        while(tail - head && val[q[tail - 1]] > val[i]) --tail;
        q[tail++] = i;
        if (q[head] <= i - k) head++;

        if (i >= k) {
            i > k && cout << " ";
            cout << val[q[head]];
        }
    }
    cout << endl;
    head = tail = 0;
    for (int i = 1; i <= n; i++) {
        while (head - tail && val[q[tail - 1]] < val[i]) --tail;
        q[tail++] = i;
        if (q[head] <= i - k) head += 1;
        if (i >= k) {
            i > k && cout << " ";
            cout << val[q[head]];
        } 
    }
    cout << endl;
    return 0;
}
