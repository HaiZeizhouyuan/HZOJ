/*************************************************************************
	> File Name: 216_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年03月05日 星期五 15时57分04秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
#include <map>
using namespace std;
 
int main() {
    int n;
    string s;
    cin >> n;
    map<string, int> h;
    for (int i = 0; i < n; i++) {
        cin >> s;
        h[s.substr(3, s.size())] += 1;
    }
    for (auto iter = h.begin(); iter != h.end(); iter++) {
        for (int i = 0; i < iter->second; i++) {
            cout << iter->first << endl;
        }
    }
 
    return 0;
}
