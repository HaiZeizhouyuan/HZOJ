/*************************************************************************
	> File Name: 328_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月02日 星期二 22时58分47秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 200000
#define lowbit(x) (x & -x)

long long c[MAX_N + 5];
long long n;
long long nums[MAX_N + 5];


void add_a_num(long long i, long long n, long long val) {
    while(i <= n) {
        c[i] += val;
        i += lowbit(i);
    }
    return ;
}

long long query(long long i) {
    long long sum = 0;
    while(i) {
        sum += c[i];
        i -= lowbit(i);
    }
    return sum;
}

void get_nums() {
    cin >> n;
    for (long long i = 1; i <= n; i++) {
        cin >> nums[i];
    }
    return ;
}


void get_res(long long &t1, long long &t2) {
    for (long long i = 1; i <= n; i++){
        long long pre_small = query(nums[i]);
        long long last_small = nums[i] - pre_small - 1;
        long long pre_big = i - pre_small - 1;
        long long last_big = n - nums[i] - pre_big;
        t1 += pre_big * last_big;
        t2 += pre_small * last_small;
        add_a_num(nums[i], n, 1);
    }
}

int main() {
    get_nums();
    long long t1 = 0, t2 = 0;
    get_res(t1, t2);
    cout << t1 << " "  << t2 << endl;
    return 0;
}

