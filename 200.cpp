/*************************************************************************
	> File Name: 200.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Jun 16 11:38:09 2020
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int n, temp, a = 7, b = 11;
    double sum = 4.0 / 7 + 7.0 / 11;
    cin >> n;

    for (int i = 3; i < n + 1; i++) {
        temp = b;
        b += a;
        a = temp;
        sum += 1.0 * a / b;
    }
    cout << a << "/" << b << endl;
    printf("%.2lf\n", sum);
    return 0;
}
