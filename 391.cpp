/*************************************************************************
	> File Name: 391.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Jul 28 11:40:40 2020
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;
#define max_n 100000

long long num[max_n + 5];

long long func(long long h, int n, long long *num) {
    long long sum = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (num[i] + sum == h) {
            cnt += 1;
            sum = 0;
        } else if (num[i] + sum > h) {
            cnt += 1;
            sum = num[i];
        } else {
            sum += num[i];
        }
    }
    if (sum > 0) cnt += 1;
    return cnt;
}

long long search (long long *num, long long num_max, long long num_sum, int m, int n) {
    long long l = num_max, r = num_sum, mid;
    while (l < r) {
        mid = (l + r) / 2;
        if (func(mid, n, num) > m) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }
    return l;
}

int main () {
    int n, m;
    long long num_sum  = 0, num_max = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
        num_sum += num[i];
        num_max = max(num_max, num[i]);
    }
    long long re = search(num, num_max, num_sum, m, n);
    cout << re << endl;
    return 0;
}
