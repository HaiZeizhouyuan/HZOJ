/*************************************************************************
	> File Name: 394.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat Aug  1 10:37:08 2020
 ************************************************************************/

#include<iostream>
using namespace std;

#define max_n 50000

int l, n, m;
int num[max_n + 5];

int func(int mid, int *num, int n1) {
    int last = 0, sum = 0;
    for (int i = 1; i < n1; i++) {
        if (num[i] - num[last] < mid) {
            sum += 1;
        } else {
            last = i;
        } 
    }
    return sum;
}

//11111100000求最大值
int search(int l, int *num, int m, int n1) {
    int left = 0, tail = l, mid;
    while(left < tail) {
        mid = (left + tail + 1) / 2;
        if (func(mid, num, n1) <= m) left = mid;
        else tail = mid - 1;
    }
    return left;
}

int main () {
    cin >> l >> n >> m;
    num[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
    }
    num[n + 1] = l;
    cout << search(l, num, m, n + 2) << endl;
    return 0;
}
