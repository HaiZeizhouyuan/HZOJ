/*************************************************************************
	> File Name: 153.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu Jun  4 17:20:18 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int day[12] = {7, 1, 2, 3, 4, 5, 6};

int f(int y, int m, int d){
    if (m == 1 || m == 2) {
        m += 12;
        y -= 1;
    }
    int j = y / 100;
    y %= 100;
    return (d + 26 * (m + 1) / 10 + y + y / 4 + j / 4 + 5 * j) % 7;
}

int main () {
    int y, m, d, j;
    cin >> y >> m >> d;
    int h = f(y, m, d);
    cout << day[(h + 6) % 7] << endl;
    return 0;
}
