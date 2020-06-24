/*************************************************************************
	> File Name: 178.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May 29 17:13:24 2020
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

char str[500000] = {'A'};
void d(int n) {
    for (int i = 1; i < n; i++) {
        int l = strlen(str);
        for (int j = 0; j < l; j++) {
            str[2 *l - j] = str[j];
        }
        str[l] = 'A' + i;
    }
    cout << str << endl;
}
int main () {
    int n;
    cin >> n;
    d(n);
    return 0;

}
