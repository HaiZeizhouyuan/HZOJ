/*************************************************************************
	> File Name: 441.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May 29 19:12:09 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main (){
    int x, n, m, d;
    cin >> x >> n;
    m =(x + n) / 7; 
    d = 2 * (n - m * 2);
    cout << d << endl;
    return 0;
}
