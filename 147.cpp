/*************************************************************************
	> File Name: 147.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue May 19 00:42:10 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#include<string.h>
#define max_n 10000
int main () {
    char num[max_n + 5];
    cin >> num;
    int len = strlen(num);
    int last = num[len -1] - '0';
    if (last % 2) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}
