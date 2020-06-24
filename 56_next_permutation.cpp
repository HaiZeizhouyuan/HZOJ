/*************************************************************************
	> File Name: 56_next_permutation.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Jun  2 19:12:59 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
#define max_n 10

int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

int main() {
    int x, y, cnt = 1;
    cin >> x >> y;
    do {
        cnt++;
        next_permutation(num + 1, num + x);
    } while (cnt < y);

    for (int i = 0; i < x; i++) {
        cout << num[i];
    }
    cout << endl;
    return 0;
}
