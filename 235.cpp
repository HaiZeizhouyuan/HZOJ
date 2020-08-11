/*************************************************************************
	> File Name: 235.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: Tue Aug 11 18:39:36 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int n, num[15], cnt = 1;

void p() {
    for (int i = 1; i < cnt; i++) {
        if(i != 1) {
            cout << " ";
        } 
        cout << num[i];
    }
    cout << endl;
}

void func(int start) {
    for (int i = start; i <= n; i++) {
        num[cnt++] = i;
        p();
        func(i + 1);
        cnt -= 1;
    }
    return ;
}


int main () {
    cin >> n;
    func(1);
    return 0;
}
