/*************************************************************************
	> File Name: 455.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Jun 15 17:59:49 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

int num[8];

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    for (int i = 0; i < 3; i++) {
        cin >> num[i];
    }
    sort(num, num + 3);
    int c = gcd(num[0], num[2]);
    cout << num[0] / c  << "/" << num[2] / c << endl;
    return 0;
}
