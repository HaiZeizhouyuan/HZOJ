/*************************************************************************
	> File Name: 452.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May 29 23:58:15 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
#define max_n 10000

int num[max_n + 5];

int main () {
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    for  (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i -1; j++) {
            if (num[j] > num[j + 1]) swap(num[j], num[j + 1]);
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
