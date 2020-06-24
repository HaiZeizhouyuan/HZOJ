/*************************************************************************
	> File Name: 172.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May 29 00:59:28 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string str[15];
int main(){
    for (int i = 0; i < 10; i++){
        cin >> str[i];
    }
    sort(str, str + 10);
    for (int i = 0; i < 10; i++) {
        cout << str[i] << endl;
    }
    return 0;
}
