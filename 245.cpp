/*************************************************************************
	> File Name: 245.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月04日 星期三 20时16分04秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include <cmath>
using namespace std;
 
#define MAX_N 100000

int input[MAX_N + 5];

int main() {
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> input[i];
    //sort(input + 1, input + n + 1);
    nth_element(input + 1, input + (n + 1) / 2, input + 1 + n);
    int sum = 0;
    int mid = input[(n + 1) / 2];

    for (int i = 1; i <= n; i++) {
        sum += abs(mid-input[i]);
    }

    cout << sum << endl;

 
 
    return 0;
}
