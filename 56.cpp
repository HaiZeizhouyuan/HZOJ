/*************************************************************************
	> File Name: 56.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Jun  2 18:05:42 2020
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;
#define max_n 10
int f[max_n + 5];
int num[max_n + 5];

void init () {
    f[0] = 1;
    num[0] = 1;
    for (int i = 1; i < max_n; i++) {
        f[i] = i * f[i - 1];
        num[i] = 1;
    }
    return ;

}

int get_num(int k, int val, int &x){
    int step = k / val;
    x = 1;
    for (int t = 0; t <= step; x += (t <= step)) {
        t += num[x];
    }
    num[x] = 0;
    k %= val;
    return k;
}
int main () {
    int m, n;
    cin >> m >> n;
    init();
    int k = n - 1, x;
    for (int i = m - 1; i >= 0 ; i--) {
        k = get_num(k, f[i], x);
        cout << x;
    }
    cout << endl;
    return 0;
}
