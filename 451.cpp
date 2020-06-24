/*************************************************************************
	> File Name: 451.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May 29 20:06:09 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
#define max_n 100000

int p[max_n + 5];
int main () {
    int n; 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    sort(p, p + n);
    for (int i = 0; i < n; i++) {
        cout << p[i] << endl;
    }
    return 0;
}
