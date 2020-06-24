/*************************************************************************
	> File Name: 466.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May 29 19:30:47 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int check(int x) {
    int tep = x, sum = 0;
    while (tep) {
        sum = sum * 10 + tep % 10;
        tep /= 10;
    }
    return x == sum;
}

int cal(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += check(i);
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    cout << cal(n) << endl;
    return 0;
}
