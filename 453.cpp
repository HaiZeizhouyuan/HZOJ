/*************************************************************************
	> File Name: 453.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat May 30 00:34:07 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
#define max_n 10000

int a[max_n + 5];
int main () {
    int n, k, num = 1;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    if (!(k - 1)) cout << a[0] << endl;
    for (int i = 1; i < n && k - num; i++) {
        if (a[i] - a[i - 1]) num += 1;
        if (!(num - k)) cout << a[i] << endl; 
    }

    return 0;
}
