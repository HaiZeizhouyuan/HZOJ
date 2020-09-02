/*************************************************************************
	> File Name: 377.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月02日 星期三 10时14分15秒
 ************************************************************************/

#include<iostream>
#include<stack>
using namespace std;

char tmp;

int main() {
    stack<int> sta;
    while(cin >> tmp) {
        if (tmp == '@') break;
        switch(tmp) {
            case '(': {
                sta.push(tmp);
            }break;
            case ')': {
                if(sta.empty()) {
                    cout << "NO" << endl;
                    return 0;
                }
                sta.pop();
            }break;
    }
    if (sta.empty()) cout << "YES" << endl;
    else cout << "NO" << endl;
 
    return 0;
}
