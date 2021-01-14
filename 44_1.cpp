/*************************************************************************
	> File Name: 44_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年01月14日 星期四 12时26分42秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 1000000
int dp[MAX_N + 5];
int len[MAX_N + 5];

int binary_search(int *arr, int n, int x){
    int head = 0, tail = n, mid;
    while(head < tail) {
        mid = (head + tail) >> 1;
        if (arr[mid] < x) head = mid + 1;
        else tail = mid;
    }
    return head;
}


int main() {
    int n, ans = 0, a;
    cin >> n;
    memset(len, 0x3f, sizeof(len));
    len[0] =  0;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        dp[i] = binary_search(len, ans + 1, a);
        len[dp[i]] = a;
        ans = max(dp[i], ans);
    }
    cout << ans << endl;
    return 0;
}
