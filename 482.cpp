/*************************************************************************
	> File Name: 482.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月26日 星期三 14时53分20秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;

string str;
int n;

int main() {
    stack<char> fro, bac;
    cin >> str;
    cin >> n;
    for (int i = 0; i < str.size(); i++) {
        fro.push(str[i]);
    }
    for (int i = 0; i < n; i++) {
        char tmp;
        cin >> tmp;
        if (tmp == 'B' && !fro.empty()) {
            fro.pop();
        }
        if (tmp == 'P') {
            char add_str;
            cin >> add_str;
            fro.push(add_str);
        }
        if (tmp == 'L' && !fro.empty()) {
            int t_f = fro.top();
            bac.push(t_f);
            fro.pop();
        }
        if (tmp == 'D' && !bac.empty()) {
            int t_b = bac.top();
            fro.push(t_b);
            bac.pop();
        }
    }
    while (!fro.empty()) {
        int t_f = fro.top();
        bac.push(t_f);
        fro.pop();
    }

    while (!bac.empty()) {
        cout << bac.top();
        bac.pop();
    }
    cout << endl;
    return 0;
}
