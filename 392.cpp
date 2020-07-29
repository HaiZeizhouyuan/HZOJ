/*************************************************************************
	> File Name: 392.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Jul 29 14:43:21 2020
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;
#define max_n 100000
long long num[max_n + 5], m, n;

long long func(long long mid) {
    long long loc = 0, sum = 1;
    for (int i = 1; i < m; i++) {
        if (num[i] - num[loc] >= mid) {
            sum += 1;
            loc = i ;
        } 
    }
    return sum;
}

long long search(long long max_d) {
    long long l = 1, r = max_d, mid;
    while (l < r) {
        mid = (l + r + 1) / 2;
        if (func(mid) >= n) l = mid;
        else r = mid - 1;
    }
    return l;
}

int main() {
    long long max_d;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        cin >> num[i];
    }
    sort(num, num + m);
    max_d = num[m - 1] - num[0];
    cout << search(max_d) << endl;
    return 0;
}
