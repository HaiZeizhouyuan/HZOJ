/*************************************************************************
	> File Name: 237_test.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: Tue Aug 11 19:58:11 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int n, m, cnt = 1, num[15], mark[15];

void p() {
    for (int i = 1; i <= n; i++) {
        if (i != 1) {
            cout << " ";
        }
        cout << num[i];
    }
    cout << endl;
}

void func(int left) {
    if (left == 0) {
        p();
        return ;
    }
    for (int i = 0; i <= n; i++) {
        if (mark[i] == 0) {
            mark[i] = 1;
            num[cnt++] = i;
            func(left - 1);
            cnt -= 1;
            mark[i] = 0;
        }
    }
    
}

int main () {
    cin >> n;
    func(n);
    return 0;
}
