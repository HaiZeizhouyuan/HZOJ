/*************************************************************************
	> File Name: 271_3.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月03日 星期三 09时26分53秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <vector>
using namespace std;

#define MAX_N 300000
int q[MAX_N + 5], head, tail;
int nums[MAX_N + 5];
int n, k;

void func1() {
    head = tail = 0;
    for (int i = 1; i <= n; i++) {
        while (tail - head && nums[q[tail - 1]] > nums[i]) --tail;
        q[tail++] = i;
        if (i - q[head] >= k) head++;
        if (i >= k) {
            int front_loc = q[head];
            i - k && cout << " ";
            cout << nums[front_loc];
        }
    }
    cout << endl;
}

void func2() {
    head = tail = 0;
    for (int i = 1; i <= n; i++) {
        while (tail - head && nums[q[tail - 1]] < nums[i]) --tail;
        q[tail++] = i;
        if (i - q[head] >=  k) head++;
        if (i >= k) {
            i - k && cout << " ";
            cout << nums[q[head]];
        }
    }
    cout << endl;
}

void read() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> nums[i];
    }
}
int main() {
    read();
    func1();
    func2();

    return 0;
}
