/*************************************************************************
	> File Name: 395.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Aug  5 18:53:27 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 500

int num[max_n + 5];

int search(int max_t, int num, int k) {
    int l = 0, r = max_t, mid;
    while (l < r) {
        mid = (l + r) / 2;
        if (func(mid) > k) l  = mid + 1;
        else r = mid;
    }
}

int main () {
    int m, k, max_t = 0;
    cin >> m >> k;
    for (int i = 0; i < m; i++) {
        cin >> num[i];
        max_t += num[i];
    }
    
    
    return 0;
}
