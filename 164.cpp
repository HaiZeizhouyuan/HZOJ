/*************************************************************************
	> File Name: 164.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May 29 14:00:54 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main () {
    int n, m, box;
    cin >> n >> m;
    box = n / m;
    if (n % m) box++;
    cout << box << endl;
    return 0;
}
