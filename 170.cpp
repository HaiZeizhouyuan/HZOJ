/*************************************************************************
	> File Name: 170.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu May 28 00:31:47 2020
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main (){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        while (str.find("Ban_smoking") != -1) {
            int pos = str.find("Ban_smoking");
            str.replace(pos, 11 , "No_smoking");
        }
        cout << str << endl;
    } 
    return 0;
}
