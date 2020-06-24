/*************************************************************************
	> File Name: 129.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu May 28 16:06:01 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 10000

int main () {
    int n, min = max_n, num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num < min) min = num;   
    }
    cout << min << endl;
    return 0;
}
