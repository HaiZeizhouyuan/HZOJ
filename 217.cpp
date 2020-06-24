/*************************************************************************
	> File Name: 217.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue May 19 11:20:01 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

int cmp (int a, int b) {
    return a > b;
}
int main() {
    int n; 
    cin >> n;
    int num[n + 5];
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n, cmp);
    int score = num[(n + 1) / 2], sum = 0;
    cout << score << " "; 
    for (int i = 0; i < n; i++) {
        if (num[i] >= score) sum++;
    }
    cout << sum << endl;
    return 0;
}
