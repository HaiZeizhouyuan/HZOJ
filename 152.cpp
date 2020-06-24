/*************************************************************************
	> File Name: 152.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu Jun  4 17:07:20 2020
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

string data[12] = {"Sunday","Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

int main() {
    int n;
    cin >> n;
    cout << data[(n + 3) % 7] << endl;
    return 0;
}
