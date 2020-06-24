/*************************************************************************
	> File Name: 174.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu May 28 13:17:50 2020
 ************************************************************************/

#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
#define max_n 1000000

char str1[max_n + 5];
char str2[max_n + 5];

int main () {
    gets(str1);
    for (int i = 0, j = 0; str1[i]; i++) {
        if (str1[i] != ' '){
            str2[j] = str1[i];
            j++;
        } else {
            str2[j] = '%';
            str2[j + 1] = '2';
            str2[j + 2] = '0';
            j += 3;
        }
    }
    cout << str2 << endl;
    return 0;
}
