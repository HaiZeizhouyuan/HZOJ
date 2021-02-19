/*************************************************************************
	> File Name: 237_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月09日 星期二 17时15分03秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
int n, nums[15],cnt = 1, mark[15];
int sum = 0;

void P() {
    if (nums[1] == 0) return ;
    for (int i = 1; i <= n; i++) {
        if (i != 1) {
            cout << " ";
        }
        cout << nums[i];
    }
    sum += 1;
    cout << endl;
}

void func(int left) {
    if (left == 0) {
        P();
        return ;
    }

    for (int i = 0; i <= n; i++) {
        if (mark[i] == 0) {
            mark[i] = 1;
            nums[cnt++] = i;
            func(left - 1);
            cnt -= 1;
            mark[i] = 0;
        }
    }
}


int main() {
    cin >> n;
    func(n);
    cout << sum << endl;
 
    return 0;
}
