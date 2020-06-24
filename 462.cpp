/*************************************************************************
	> File Name: 462.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Jun 12 14:47:24 2020
 ************************************************************************/

#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
#define max_n 10000

typedef struct urs{
    char kind;
    string infor;
} User;
User user[max_n + 5];

int main () {
    int n, x = 0, y = 0, num = 0;
    long long sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> user[i].kind >> user[i].infor;
        string str = user[i].infor;
        if (user[i].kind == 'q') {
            sum += atoi(str.c_str());
            num += 1;
        } else {
            char a = user[i].infor[str.size() - 2];
            ((a - '0') & 1) ? y += 1: x += 1;
        }
    }
    int everage = num ?  sum / num : 0;
    cout << y << " " << x << " " << everage << endl;
    return 0;
}

