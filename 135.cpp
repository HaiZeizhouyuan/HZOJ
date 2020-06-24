/*************************************************************************
	> File Name: 135.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu May 28 16:23:21 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int checkday (int y, int m){
    int date[17] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0))) date[2] += 1;
    return date[m];
}

void check (int y, int m, int d, int x) {
    d += x;
    while (d > checkday(y, m)) {
        d -= checkday(y,m);
        m++;
        if (m == 13) {
            m = 1;
            y++;
        }
    }
    cout << y << " " << m << " " << d << endl;
    return ;
}
int main(){
    int x, y, m ,d;
    cin >> x >> y >> m >> d;
    check(y, m, d, x);

    return 0;
}
