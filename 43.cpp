/*************************************************************************
	> File Name: 43.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu May 28 18:07:16 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 1000

int ans[max_n + 5][max_n + 5];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> ans[i][j];
        }
    }

    for (int i = n -2; i >= 0; i--) {
        for (int j = 0; j <= i; j++ ) {
            ans[i][j] += max(ans[i + 1][j ], ans[i + 1][j + 1]);
        }
    }
    cout << ans[0][0] << endl;
    return 0;
}
