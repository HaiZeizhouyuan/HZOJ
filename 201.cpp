/*************************************************************************
	> File Name: 201.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Jun 15 14:28:18 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

int num[105] = {0};
int cmp(int a, int b) {
    return a <= b;
}

int main() {
    int n, sum = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        num[i] = temp;
    }
    sort(num, num + n, cmp);
    for  (int i = 1; i < n; i++) {
        if (num[i] - num[i - 1]) {
            num[sum] = num[i];
            sum += 1;
        }
    }
    cout << sum << endl;
    for (int i = 0; i < sum; i++) {
        i && cout << " ";
        cout << num[i];
    }
    cout << endl;
    return 0;
}
