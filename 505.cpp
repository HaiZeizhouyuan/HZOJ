/*************************************************************************
	> File Name: 505.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu Jun  4 13:24:27 2020
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
#define max_n 100000
string str[max_n + 5];

bool cmp(string a, string b){
    return a + b > b + a;
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    sort(str, str + n, cmp);
    for (int i = 0; i < n; i++ ) {
        cout << str[i];
    }
    cout << endl;
    return 0;
}
