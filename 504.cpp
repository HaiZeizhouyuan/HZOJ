/*************************************************************************
	> File Name: 504.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Jun  3 20:20:02 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define max_n 240
string str;

void check(int s) {
    for (int i = 0; i < s; i++) {
        int flag = 1;
        for(int j = 0; j < str.size() - 1; j++ ) {
            if (str[j] > str[j + 1]) {
                flag = 0;
                str = str.replace(str.find(str[j]), 1, "");
            }
            if (!flag) break;
        }
    }
    return ;
}

void output(string str, int len) {
    int t = 0;
    for (int i = 0; i < len; i++ ) {
        if (str[i] != '0') t++; 
        if (t) cout << str[i];
    }
    cout << endl;
    return ;
}

int main(){
    int s;
    cin >> str;
    cin >> s;
    int len = str.size();
    check(s);
    output(str, len - s);
    return 0;
}
