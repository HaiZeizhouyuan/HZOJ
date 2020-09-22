/*************************************************************************
	> File Name: 390.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Jul 27 22:01:12 2020
 ************************************************************************/

#include<iostream>
#include <algorithm>
#include<cstdlib>
using namespace std;
#define max_n 100000
#define max_l 100000000
long long n, m, len[max_n + 5], max_ll = 0;
long long func (long long length) {
    long long sum = 0;
    for (long long i = 0; i < n; i++) {
        if (len[i] >= length) sum += len[i] / length;
    }
    return sum;
}

long long search() {
    long long l = 0, r = max_ll, mid;
    while (l < r) {
        mid = (l + r + 1) / 2;
        if (func(mid) >= m) l = mid;
        else r = mid - 1;
    }
    return l;
}
int main () {
   //并不是每个木头都要切, 只要切了m个长度相等的木头就行.
    cin >> n >> m; //n个木头, 分m段;
    for (long long i = 0; i < n; i++) {
        cin >> len[i];
        max_ll = max(max_ll, len[i]);
    }
    cout << search() << endl;
    return 0;
}
