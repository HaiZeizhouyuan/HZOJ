/*************************************************************************
	> File Name: 168.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue May 26 01:07:21 2020
 ************************************************************************/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

#define max_n 100

string str[max_n + 5];

void modify(string *str, int n){
    for (int i = 0; i < n; i++) {
        if (str[i][0] >= 'a' && str[i][0] <= 'z') str[i][0] -= 'a' - 'A';
        for (int j = 1; str[i][j]; j++) {
            if (str[i][j] <= 'Z' && str[i][j] >= 'A') str[i][j] += 'a' - 'A'; 
        }
    }
    sort (str, str + n);
    for (int i = 0; i < n; i++) {
        cout << str[i] <<endl;
    }
    return ;
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    modify(str, n);
    return 0;
}
