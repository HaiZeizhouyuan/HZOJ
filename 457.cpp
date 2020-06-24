/*************************************************************************
	> File Name: 457.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Jun 15 22:45:56 2020
 ************************************************************************/

#include<iostream>
#include<cstdlib>
using namespace std;
#define max_n 1000

int num1[max_n + 5];
int num2[max_n + 5] = {0};
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num1[i];
    }
    for (int i = 1; i < n; i++) {
        int a = num1[i] - num1[i - 1];
        num2[abs(a)] = 1;
    }

    int flag = 1;
    for (int i = 1; i < n && flag; i++) {
        if(num2[i]) continue;
        else flag = 0;
    }
    flag && cout << "Jolly" << endl;
    !flag && cout << "Not jolly" << endl;
}
