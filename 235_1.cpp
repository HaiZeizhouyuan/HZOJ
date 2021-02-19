/*************************************************************************
	> File Name: 235_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月09日 星期二 16时50分59秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

int n;
int nums[15], cnt = 1;

void P() {
    for (int i = 1; i < cnt; i++) {
        if (i != 1) {
            cout << " ";
        }
        cout << num[i];
    }
    cout << endl;
}


void func(int start) {
    for (int i = start; i <= n; i++) {
        num[cnt++] = i;
        p();
        func(i + 1);
        cnt -= 1;
    }
    return ;
}


int main() {
    cin >> n;
    func(1); 
    return 0;
}
