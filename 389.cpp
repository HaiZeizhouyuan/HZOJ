/*************************************************************************
	> File Name: 389.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat Jul 25 11:33:02 2020
 ************************************************************************/

#include<iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
#define max_n 100000

int  num[max_n + 5];
//d是相邻两个人之间的最小距离
int func(int d, int m) {
    int now = 0, cnt = 1;//上一个人的位置
    for (int i = 1; i < m; i++) {
        if (num[i] - num[now] >= d) {
            cnt += 1;
            now = i;
        }
    }
    return cnt;
}

int search(int *num, int max_d, int n, int m) {
    int l = 0, r = max_d, mid;
    while (l < r) {
        mid = (l + r + 1) / 2;
        if (func(mid, m) >= n) {
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    return l;
}



int main () {
    int m, n, temp, max_d = 0;
    cin >> m >> n;//m个位置, n个人
    for (int i = 0; i < m; i++) {
        cin >> num[i];
        max_d = max(max_d, num[i]);
    }
    sort(num, num + m);
    cout << search(num, max_d, n, m) << endl;
    return 0;
}
