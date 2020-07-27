/*************************************************************************
	> File Name: 596.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Jul 24 21:31:33 2020
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;
#define max_n 5000
string a[max_n + 5];

bool cmp(string a, string b) {
    int size_a = a.size();
    int size_b = b.size();
    if (size_a < size_b) return 1;
    if (size_a > size_b) return 0;
    for (int i = 0; i < size_a; i++) {
        if (a[i] > b[i]) return 0;
        if (a[i] < b[i]) return 1;
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n, cmp );
    for (int i = 0; i < n; i++) cout << a[i] << endl;
    return 0;
}
