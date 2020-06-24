/*************************************************************************
	> File Name: 145.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun May 24 16:21:39 2020
 ************************************************************************/

#include<iostream>
#include<string.h>
using namespace std;
#define max_n 100

char name[max_n  + 5];
char str[max_n + 5];
int main(){
    int n, len = 0, tmp;
    cin >> n;
    while(n--) {
        cin >> str;
        tmp = strlen(str);
        if (tmp < len ) continue;
        len = tmp;
        strncpy(name, str, 100);
    }
    cout << name << endl;
    return 0;
}
