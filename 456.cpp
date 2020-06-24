/*************************************************************************
	> File Name: 456.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Jun 15 18:19:45 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num[n + 5];
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n);
    int j = 0, sum = 0, flag = 1, re = -1;
    for (int i = 0; i < n && flag; i++) {
        if(!(num[i] - num[j])) {
            sum += 1;
        } else { 
            if (sum & 1) {
                flag = 0;
                re = num[j];
            }
            j = i;
            sum = 1; 
        }
    }
    !(re + 1) && cout << num[j] << endl;
    (re + 1) && cout << re << endl;
    return 0;
}
