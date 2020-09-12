/*************************************************************************
	> File Name: 606.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月11日 星期五 20时35分31秒
 ************************************************************************/
#include <iostream>
#include <algorithm>
#include <inttypes.h>
using namespace std;
#define max_n 10000
long long num[max_n + 5];
long long dp[max_n + 5];
int main()
{
    int n;
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> num[i];
    }
    dp[0] = num[0];
    cout << dp[0] << " ";
    for(int i = 1;i < n;i++) {
        dp[i] = max(dp[i - 1] + num[i],num[i]);
        cout << dp[i] << " ";
    }
    cout << endl;
    long long ans = INT64_MIN;
    for(int i = 0;i < n;i++) {
        if(dp[i] > ans) {
            ans = dp[i];
        }
    }
    cout << ans << endl;
    return 0;
}

