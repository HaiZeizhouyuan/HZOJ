/*************************************************************************
	> File Name: 44.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年12月27日 星期日 20时13分40秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 1000000
int arr[MAX_N + 5];
int dp[MAX_N + 5];
int ans = -1;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        for(int j = 0; j < i; j++) {
            if (arr[j] >= arr[i]) continue;
            dp[i] = max(dp[i], dp[j] + 1);
        }
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;

 
    return 0;
}
