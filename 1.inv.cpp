/*************************************************************************
	> File Name: 1.inv.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年01月19日 星期二 09时12分10秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 1000
int inv[7] = {0};

int main() {
    inv[1] = 1;
    for (int i = 2; i < 7; i++) {
        inv[i] = (-(7/i) * inv[7 % i] % 7 + 7) % 7;
    }
 
    return 0;
}
