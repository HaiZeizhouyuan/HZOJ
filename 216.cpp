/*************************************************************************
	> File Name: 216.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue May 19 11:38:10 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
#define max_n 100
char *name[max_n + 5];

bool cmp(const char *str1, const char *str2){
    int t = strcmp(str1, str2);
    return t < 0;
} 
int main () {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        name[i] = (char *) malloc (sizeof(char) * 50);
    }

    for (int i = 0; i < n; i++) {
        cin >> name[i];
    }

    for (int i = 0; i < n; i++) {
        name[i] =  name[i] + 3;
    }
    sort(name, name + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << name[i] << endl;
    }
    return 0;
}
