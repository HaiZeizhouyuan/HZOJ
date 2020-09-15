/*************************************************************************
	> File Name: 567.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月15日 星期二 20时24分00秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
#define max_n 1000
int n, k, ans;
int nums[max_n + 5];
int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int m;
    sort(nums, nums + n);
    for (int j = 0; j < n;) {
        int tmp = 1, m = 0, flag = 1;
        for (int i = j + 1; i < n; i++) {
            if (flag && nums[i] > nums[j]) {
                m = i; 
                flag = 0;
            }
            if (nums[i] - nums[j] > k) continue;
            tmp += 1;
            if (tmp > ans) ans = tmp;
        }
        if (m) j = m;
        else j = n;
    }
    cout << ans << endl;
    return 0;
}
