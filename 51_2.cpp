/*************************************************************************
	> File Name: 51_2.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月02日 星期二 11时51分53秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define MAX_NUM 1000
#define MO_NUM 100007

int n, m;
int write_num[MO_NUM + 5][MAX_NUM + 5];
int sta[MAX_NUM + 5], top;
int cur_sum[MAX_NUM + 5][MAX_NUM + 5];
long long ans = 0;


void get_write() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            write_num[i][j] = write_num[i - 1][j] + 1;
        }
    }
    return ;
}

long long get_res() {
    for (int i = 0; i < n; i++) {
        write_num[i][0] = 0;
        top = -1;
        sta[++top] = 0;
        for (int j = 0; j < m; j++) {
            while(top != -1 && write_num[i][sta[top] >= write_num[i][j]]) top--;
            cur_sum[i][j] = cur_sum[i][j] * (j - sta[top]) + cur_sum[i][sta[top]];
            cur_sum[i][j] %= MO_NUM;
            ans += cur_sum[i][j]; 
            ans %= MO_NUM;
        }
    }
    return ans;
}

int main() {
    get_write();
    cout << get_res() << endl;
    return 0;
}
