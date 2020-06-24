/*************************************************************************
	> File Name: 159.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Jun  5 18:36:07 2020
 ************************************************************************/

#include<iostream>
using namespace std;

void init(char);

int main() {
    char str;
    cin >> str;
    init(str);
    return 0;
}
void init (char str) {
    int n = str - 'A' + 1;
    int m = 0, k = 2 * n - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << " ";
        }
        for (int j = 0; j < k; j++) {
            cout << str;
            if (j < k / 2) str--;
            else (j - k / 2) && (k - j - 1) && str++;
        }
        cout << endl;
        k -= 2;
        m++;
    }
    return ;
}
