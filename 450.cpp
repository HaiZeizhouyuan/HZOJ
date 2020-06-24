/*************************************************************************
	> File Name: 450.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May 29 19:52:00 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
#define max_n 100

int arr[max_n + 5];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        i && cout << " ";
        cout << arr[i];
    }
    cout << endl;
    return 0;
}
