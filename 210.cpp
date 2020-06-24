/*************************************************************************
	> File Name: 210.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Jun  8 16:44:36 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
#define max_n 26

string str[max_n + 5];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        str[i] = temp;
    }
    sort(str, str + n);
    for (int i = 0; i < n; i++){
        i && cout << " ";
        cout << str[i];
    }
    cout << endl;
    return 0;
}
