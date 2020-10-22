/*************************************************************************
	> File Name: 516.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年10月22日 星期四 19时52分54秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
using namespace std;
 
int n, cntc, cntw, numc[100005];
long long ans;
char str[100005];

int main() {
    cin >> n >> &str[1];
    for (int i = 1; i <= n; i++) {
        if (str[i] == 'C') {
            cntc++;
        }
        numc[i] = cntc;
    }
    for (int i = n; i  >= 1; i--) {
        if (str[i] == 'W') {
            cntw++;
        }
        if (str[i] == 'O') {
            ans += (long long)numc[i - 1] * cntw;
        }
    }
    cout << ans << endl;
 
    return 0;
}
