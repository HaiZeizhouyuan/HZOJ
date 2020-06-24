/*************************************************************************
	> File Name: 219.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed May 20 17:45:44 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
#define max_n 10000

int num[max_n + 5];

int cmp1(int a, int b){
    return a < b;
}

int cmp2(int a, int b){
    return a > b;
}
int main() {
    int n, l1, r1, l2, r2;
    cin >> n >> l1 >> r1 >> l2 >> r2;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num + l1 - 1 , num + r1, cmp1);
    sort(num + l2 - 1 , num + r2 , cmp2);
    for (int i = 0; i < n; i++) {
        if(i) {
            cout << " ";
        }
        cout << num[i];
    }
    cout << endl;
    return 0;
}
