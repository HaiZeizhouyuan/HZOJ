/*************************************************************************
	> File Name: 158.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Jun  5 17:23:53 2020
 ************************************************************************/

#include<iostream>
using namespace std;
void init(int );
int main () {
    int n;
    cin >> n;
    init(n);
    return 0;
}
void init(int n) {
    int tmp = n, m = 0;
    for (int i = 0; i < 2 * n + 1; i++) {
        for (int j = 0; j < m; j++) {
            cout << " ";
        }
        cout << tmp;
        for (int k = 0; k < 2 * tmp - 1; k++) {
            cout << " ";
        }
        tmp && cout << tmp;
        cout << endl;
        if (i < (2 * n + 1) / 2){
            m++;
            tmp--;
        } else {
            m--;
            tmp++;
        }
    }   
}
