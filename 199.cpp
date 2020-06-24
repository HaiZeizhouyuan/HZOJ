/*************************************************************************
	> File Name: 199.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Jun 16 01:14:06 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 100000

int a[15];
long long num[max_n + 5] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int func(int i, int *a) {
    return a[1] * num[i - 1] + a[2] * num[i - 2] +
           a[3] * num[i - 3] + a[4] * num[i - 4] + 
           a[5] * num[i - 5] + a[6] * num[i - 6] + 
           a[7] * num[i - 7] + a[8] * num[i - 8] +
           a[9] * num[i - 9] + a[10] * num[i -10];
    
    /*for (int i = 10; i < k + 1; i++) {
        for (int j = 0; j < 10; j++) {
            f[i] += (a[j + 1] * f[i - j - 1]) % m;
        }
    }*/

}

int main() {
    int k, m;
    cin >> k >> m;
    for (int i = 1; i < 11; i++) {
        cin >> a[i];
    }
    for (int i = 10; i <= k; i++) {
        num[i] = func(i, a) % m;
    }
    cout << num[k]<< endl;


    return 0;
}
