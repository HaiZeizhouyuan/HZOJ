/*************************************************************************
	> File Name: 198.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Jun 16 00:40:22 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 100000
long long num[max_n + 5] = {0, 1, 1};

void init(long long n) {
    for (int i = 3; i <= n; i++) {
        num[i] = num[i - 1] + num[i - 2];
        num[i] %= 1000000007;
    }
    return ;
}

int main() {
    long long n, re;
    cin >> n;
    init(n);
    cout << num[n] << endl;
    return 0;
}
