/*************************************************************************
	> File Name: 177.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May 29 01:49:09 2020
 ************************************************************************/

#include<iostream>
#include<cstring>

using namespace std;
int main() {
    char str[30];
    cin >> str;
    int a = 0, len = strlen(str);
    for (int i = 0; i < len; i++ ) {
        for (int j = 0; j < len; j++) {
            cout << str[a];
            a++;
            a %= len;
        }
        cout << endl;
        a += len - 2;
        a %= len;
    }
    return 0;
}
