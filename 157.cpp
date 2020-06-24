/*************************************************************************
	> File Name: 157.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Jun  5 16:00:02 2020
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

void init(int);

int main() {
    int n;
    cin >> n;
    init(n);
    return 0;
}

void init(int n) {
    int tmp = n, m = 0;
    char a = 'A';
    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < m; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * tmp - 1; j++) {
            printf("%c", a);
            if (j < (2 * tmp - 1) / 2) a ++;
            else a -= 1;
        }
        if (i < (2 * n - 1) / 2) {
            tmp--;
            m++;
            a += 2;
        } else {
            tmp ++;
            m--;
        }  
        cout << endl;
    }
    return ;
}
