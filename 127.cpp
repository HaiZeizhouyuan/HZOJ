/*************************************************************************
	> File Name: 127.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu May 28 15:55:05 2020
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;
#define max_n 100000

int main(){
    int x, n, sum;
    cin >> x >> n;
    sum = x * pow(1.06, n);
    cout << sum << endl;
    return 0;
}
