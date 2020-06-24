/*************************************************************************
	> File Name: 212.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun May 17 20:02:37 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<string.h>
#define max_n 100
using namespace std;

char *str[max_n + 5];

bool cmp(const char *str1, const char *str2) {
    int t = strcmp(str1, str2);
    return t < 0;
}
int main() {
    for (int i = 0; i < 10; i++) {
        str[i] = (char*)malloc(sizeof(char) * 20);
    }
    for (int i = 0; i < 10; i++) {
        cin >> str[i];
    }
    sort(str, str + 10, cmp);
    for (int i = 0; i < 10; i++) {
        cout << str[i] << endl;
    }
    return 0;
}

