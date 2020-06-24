/*************************************************************************
	> File Name: 134.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu May 28 16:12:57 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main () {
    int a, b, flag = 0;
    cin >> a >> b;
    for (int i = a; i < b + 1; i++) {
        if (i % 11) continue;
        else flag && cout << " "; cout << i;
        flag = 1;
    }
    cout << endl;
    return 0;
}
