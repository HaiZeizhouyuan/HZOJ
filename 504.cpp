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

inline string check(int len, int &s, int k) {
    for (int i = 0; i < len && s; i++) {
        int flag = 1;
        for(int j = 0; j < len && s; j++ ) {
            if (str[j] > str[j + 1]) {
                s--;
                flag = 0;
                str = str.replace(str.find(str[j]), 1, "");
            }
            if (!flag) break;
        }
    }
    return str;
}

void output(string str, int s) {
    int t = 0, len = str.size();
    for (int i = 0; i < len - s; i++ ) {
        if (str[i] != '0') t++; 
        if (t) cout << str[i];
    }
    cout << endl;
    return ;
}

int main(){
    int s, k = 0;
    cin >> str;
    cin >> s;
    int len = str.size();
    str = check(len, s, k);
    output(str, s);
    return 0;
}
