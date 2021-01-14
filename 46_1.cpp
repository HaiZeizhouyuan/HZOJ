/*************************************************************************
	> File Name: 46_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年01月14日 星期四 13时40分05秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

#define MAX_N 500000

vector<int> mark[MAX_N + 5];
int dp[MAX_N + 5];

int expand(string &s, int i, int j) {
    while(s[i] == s[j]) {
        mark[j + 1].push_back(i + 1);
        --i, ++j;
        if (i < 0 || j >= s.size()) break;
    }
    return 1;
}



int main() {
    string s;
    cin >> s;
    for (int i = 0; s[i]; i++) {
        expand(s, i, i);
        i + 1 < s.size() && expand(s, i, i + 1);
    }
    for (int i = 1; i <= s.size(); i++) {
        dp[i] = i;
        for (int j = 0; j < mark[i].size(); j++) {
            dp[i] = min(dp[i], dp[mark[i][j] - 1] + 1);
        }
    }

    cout << dp[s.size()] - 1 << endl;
    return 0;
}
