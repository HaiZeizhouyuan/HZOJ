/*************************************************************************
	> File Name: 209.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Jun  8 16:23:27 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

int num[105] = {0};
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        num[i] = temp;
    } 
    sort(num, num + n);
    for (int i = 0; i < n; i++) {
        cout << num[i] << endl;
    }
    return 0;
}
