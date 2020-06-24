/*************************************************************************
	> File Name: 154.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Jun  5 13:46:39 2020
 ************************************************************************/

#include<iostream>
using namespace std;

void init(int);
int main () {
    int n;
    cin >> n;
    init(n);
    return 0;
}

void init (int n) {
    int temp = n;
    for (int i = 0; i < n; i++) {
        for (int j = temp; j > 0; j--) {
            cout << j;
            if (j - 1) cout << " ";
        }
        cout << endl;
        temp--;
    }
    return ;
}
