/*************************************************************************
	> File Name: 328.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年01月15日 星期五 16时08分18秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 200000
long long c[MAX_N + 5];
#define lowbit(x) (x & -x)

void add(long long i, long long x, long long n) {
    while(i <= n) {
        c[i] += x;
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

long long n;
long long val[MAX_N + 5];

void read() {
    cin >> n;
    for (long long i = 1; i <= n; i++) {
        cin >> val[i];
    }
    return ;
}

void slove(long long &x, long long &y) {
    x = y = 0;
    for (long long i = 1; i <= n; i++) {
        long long a1 = query(val[i]);
        long long a2 = val[i] - a1 - 1;
        long long b1 = i - a1 - 1;
        long long b2 = n - val[i] - b1;
        x += b1 * b2;
        y += a1 * a2;
        add(val[i], 1, n);
    }
    return ;
}


int main() {
    read();
    long long a, b;
    slove(a, b);
    cout << a << " " << b << endl;
    return 0;
}
