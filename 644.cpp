/*************************************************************************
	> File Name: 644.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月08日 星期二 16时43分21秒
 ************************************************************************/

#include<iostream>
#include<stack>
using namespace std;
 
int n, op, num;
int main() {
    stack<int> sta;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> op;
        switch(op) {
            case 1:
                cin >> num;
                sta.push(num);
            break;
            case 2:
                if (sta.empty()) cout << "empty" << endl;
                else cout << sta.top() << endl;
            break;
            case 3:
                if (!sta.empty()) sta.pop();
            break;
        }
    }
 
    return 0;
}
