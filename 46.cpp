/*************************************************************************
	> File Name: 46.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年01月09日 星期六 14时31分58秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

#define MAX_N 500000
int dp[MAX_N + 5];

bool is_palindrome(string &s, int i, int j) {
    while(i < j) {
        if (s[i++] - s[j--]) return false;
    }
    return true;
}


int main() {
    string s;
    cin >> s;
    dp[0] = 0;
    for(int i = 1; i <= s.size(); i++) {
        dp[i] = dp[i - 1] + 1;
        for (int j = 0; j < i; j++) {
            if (is_palindrome(s, j, i - 1)) {
                dp[i] = min(dp[i], dp[j] + 1);
            }
        }
    }
    cout << dp[s.size()] - 1 << endl;
 
    return 0;
}
