/*************************************************************************
	> File Name: 167.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu May 28 01:01:02 2020
***********************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1, str2;
    int n;
    cin >> str1 >> n >> str2;
    int len = str1.size();
    int loc = str1.find("a") + 1;
    str1.insert(n - 1, str2);
    cout << len <<endl;
    cout << loc << endl;
    cout << str1 << endl;

    return 0;
}
