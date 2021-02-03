/*************************************************************************
	> File Name: 262_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月03日 星期三 07时54分58秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 60000
int n, sum = 0;
int nums[MAX_N + 5];
int sta[MAX_N + 5];

int is_out () {
    int top = -1;
    int sta_max = 0;
    for (int i = 0; i < n; i++) {
        while (sta_max < nums[i]) {
            sta[++top] = (++sta_max);
        }
        if (top == -1 || (sta[top] != nums[i])) return 0;
        top--;
    }
    return 1;
}

int main() {
    cin >> n;
    for (int i = 0; i < n;i++)  nums[i] = i + 1;
    do {
        if (is_out()) {
            sum += 1;
        }    
    }while(next_permutation(nums, nums + n));
    cout << sum << endl;
    return 0;
}
