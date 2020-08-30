/*************************************************************************
	> File Name: 265.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月29日 星期六 18时26分37秒
 ************************************************************************/

#include<iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<char> sta;
    string str;
    cin >> str;
    int sum = 0, max_sum = 0;
    for (int i = 0; i < str.size(); i++) {
        int flag = 0, mark = 0;
        if (!sta.empty()) {
            if (str[i] == ')' && sta.top() == '(') flag = 1;
            if (str[i] == '}' && sta.top() == '{') flag = 1;
            if (str[i] == ']' && sta.top() == '[') flag = 1;
        }
        if (str[i] == '{' || str[i] == '[' || str[i] =='(') flag = 2;
        if (flag == 0) {
            if(sum > max_sum) max_sum = sum;
            sum = 0;
            sta.push(str[i]);
        } else if (flag == 2) {
            sta.push(str[i]);
        } else {
            sta.pop();
            sum += 2;
        }
    }
    if (sum > max_sum) max_sum = sum;
    cout << max_sum << endl;
    return 0;
}
