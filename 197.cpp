/*************************************************************************
	> File Name: 197.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Jun 16 00:24:11 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

int num[10];

int cmp(int a, int b) {
    return a > b;
}

int main () {
    for (int i = 0; i < 10; i++) {
        cin >> num[i];
    }
    sort(num, num + 10, cmp);
    for (int i = 0; i < 10; i++) {
        i && cout << " ";
        cout << num[i];
    }
    cout << endl;

    return 0;
}
