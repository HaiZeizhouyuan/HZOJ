/*************************************************************************
	> File Name: 454.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Jun 15 17:36:52 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

int num[105];

int main(){
    int n, sum = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    if(!n) sum = 0;
    sort(num, num + n);
    for (int i = 1; i < n; i++) {
        if (num[i] - num[i - 1]) sum += 1;
    }
    cout << sum << endl;
    for (int i = 0; i < n; i++) {
        if (!i) cout << num[i];
        if (i > 0 && num[i] - num[i - 1]) cout << " " << num[i]; 
    }
    cout << endl;
    return 0;
}
