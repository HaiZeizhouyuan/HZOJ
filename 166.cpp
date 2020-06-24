/*************************************************************************
	> File Name: 166.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu May 28 01:44:22 2020
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1, str2;
    int n;
    cin >> str1 >> n >> str2;
    int len1 = str1.size();
    if (len1 > 100) cout << 100 << endl;
    else cout << len1 << endl;
    str1.insert(n - 1, str2);
    int len2 = str1.size();
    int loc = str1.find_last_of("x");
    cout << str1 << endl;
    cout << len2 - loc << endl;
    return 0;
}
