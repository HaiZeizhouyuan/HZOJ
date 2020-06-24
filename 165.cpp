/*************************************************************************
	> File Name: 165.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May 29 14:06:23 2020
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    long long c;
    int sum = 0;
    cin >> c;
    for (long long a = 1; a <= c; a++) {
        long long b = sqrt(c * c - a * a);
        if (a * a + b * b == c * c) {
            sum++;
        }
        
    }
    cout << sum / 2  << endl;
    return 0;
}
