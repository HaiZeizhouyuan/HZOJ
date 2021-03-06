/*************************************************************************
	> File Name: 166_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年03月05日 星期五 13时52分02秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
int main() {
    string s1, s2;
    int n;
    cin >> s1;
    cin >> n;
    cin >> s2;
    int len = s1.size();
    s1.insert(n - 1, s2);
    if (len > 100) cout << 100 << endl;
    else cout << len << endl;
    cout << s1 << endl;
    cout << s1.size() - s1.rfind('x') << endl;

 
    return 0;
}
