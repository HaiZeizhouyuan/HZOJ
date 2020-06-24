/*************************************************************************
	> File Name: 196.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Jun 15 23:56:31 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int init(int );

int main() {
    int n;
    cin >> n;
    cout << init(n) << endl;
    return 0;
}
int init (int n) {
    if (n == 1) return 0;
    if (n == 2 || n == 3) return 1;
    else return init(n - 2) + init(n - 3);
}
