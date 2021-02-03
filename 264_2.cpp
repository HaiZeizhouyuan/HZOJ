/*************************************************************************
	> File Name: 264_2.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月03日 星期三 09时55分04秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 100000
long long n;
long long height[MAX_N + 5];
long long sta[MAX_N + 5], top;
long long lefts[MAX_N + 5], rights[MAX_N + 5];

void get_height() {
    scanf("%lld", &n);
    height[0] = height[n + 1] = -1;
    for (long long i = 1; i <= n; i++) scanf("%lld", height + i);
    return ;
}

void get_left() {
    top = -1;
    sta[++top] = 0;
    for (long long i = 1; i <= n; i++) {
        while(top != -1 && height[sta[top]] >= height[i]) top--;
        lefts[i] = sta[top];
        sta[++top] = i;
    }
    return ;
}


void get_right() {
    top = -1;
    sta[++top] = n + 1;
    for (long long i = n; i >= 1; i--) {
        while(top != -1 && height[sta[top]] >= height[i]) top--;
        rights[i] = sta[top];
        sta[++top] = i;
    }
    return ;
}

long long get_res() {
    long long max_s = 0;
    for (int i = 0; i < n; i++) {
        max_s = max(max_s, height[i] * (rights[i] - lefts[i] - 1));
    }
    return max_s;

}

int main() {
    get_height();
    get_left();
    get_right();
    cout << get_res() << endl;
    return 0;
}
