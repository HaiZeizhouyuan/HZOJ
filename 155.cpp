/*************************************************************************
	> File Name: 155.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Jun  5 14:10:48 2020
 ************************************************************************/

#include<iostream>
using namespace std;

void init(int n);
int main() {
    int n;
    cin >> n;
    init(n);
    return 0;
}

void init(int n) {
    int sum = 0, a = 3;
    for (int i = 1; i < n + 1; i++) {
        cout << a  << endl;
        sum += a;
        a += 2 * i;
    }
    cout << sum << endl;
    return ;
}
