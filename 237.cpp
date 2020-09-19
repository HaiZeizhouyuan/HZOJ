/*************************************************************************
	> File Name: 237.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: Tue Aug 11 19:42:56 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int n, num[15], cnt = 1, mark[15];
int sum = 0;

void p() {
    if (num[1] == 0) return ;
    for (int i = 1; i <= n; i++){
        if (i != 1) {
            cout << " ";
        }
        cout << num[i];
    }
    sum += 1;
    cout << endl;
}

void func(int left) {
    if (left == 0) {
        p();
        return ;
    }
    for (int i = 0; i <= n; i++){
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
    cout << sum << endl;
    return 0;
}
