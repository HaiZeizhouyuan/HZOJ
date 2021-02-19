/*************************************************************************
	> File Name: 236_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月09日 星期二 17时01分17秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

int n, m, nums[15], cnt = 1;

void P() {
    for (int i =  1; i <= m; i++) {
        if (i != 1) {
            cout << " ";
        }
        cout << nums[i];
    }
    cout << endl;
    return ;
}

void func(int start, int left) {
    if (left == 0) {
        P();
        return ;
    }

    for (int i = start; i <= n - left + 1; i++) {
        nums[cnt++] = i;
        func(i + 1, left - 1);
        cnt -= 1;
    }
    return ;
}

int main() {
    cin >> n >> m;
    func(1, m);
 
    return 0;
}
