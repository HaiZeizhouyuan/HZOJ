/*************************************************************************
	> File Name: 383.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月03日 星期四 11时03分48秒
 ************************************************************************/

#include<iostream>
#include<queue>
using namespace std;
 
int main() {
    queue<int> que_m;
    queue<int> que_w;
    int x, y, z;
    cin >> x >> y >> z;
    for (int i = 1; i <= x; i++) {
        que_m.push(i);
    }
    for (int i = 1; i <= y; i++) {
        que_w.push(i);
    }

    for (int i = 0; i < z; i++) {
        int f_m = que_m.front();
        int f_w = que_w.front();
        cout << f_m << " " << f_w << endl;
        que_m.pop();
        que_w.pop();
        que_m.push(f_m);
        que_w.push(f_w);
    }

 
    return 0;
}
