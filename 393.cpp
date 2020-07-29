/*************************************************************************
	> File Name: 393.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Jul 29 15:48:11 2020
 ************************************************************************/

#include<iostream>
#include<cmath>
#include <cstdio>
using namespace std;
#define max_n 10000
int n, k;
double len[max_n + 5];

int func(double mid, int n) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += len[i] / mid;
    }
    return cnt;
}

double search(double max_l) {
    double l = 0, r = max_l, mid;
    while (fabs(l - r) > 0.00005) {
        mid = (r + l ) * 1.0 / 2;
        if (func(mid, n) >= k) l = mid;
        else r = mid;
    }
    return l;
}


int main () {
    double max_l = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> len[i];
        max_l = max(max_l, len[i]);
    }
    double re = search(max_l);
    int a = (int)re;
    int b = (int)(re * 10) % 10;
    int c = (int)(re * 100) % 10;
    printf("%d.%d%d\n", a, b, c);
    return 0;
}
