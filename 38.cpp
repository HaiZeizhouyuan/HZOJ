/*************************************************************************
	> File Name: 38.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年12月28日 星期一 17时26分39秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
int func(int n) {
    if (n == 1) return 2;
    if (n == 2) return 4;
    return func(n - 1) + func(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << func(n - 1) << endl; 
    return 0;
}
