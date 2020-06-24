/*************************************************************************
	> File Name: 211.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Jun  8 16:53:47 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define max_n 30
#define max_m 40

string name[max_n + 5];

int main (){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        reverse(name[i].begin(), name[i].end());
    }
    sort(name, name + n);
    for (int i = 0; i < n; i++) {
        cout << name[i] << endl;
    }
    return 0;
}
