/*************************************************************************
	> File Name: 156.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Jun  5 14:40:11 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 9999

void primescreen(int);
void square();
void init(int);
int prime[max_n + 5] = {0};
int num[max_n + 5] = {0};
int main() {
    int a, b;
    cin >> a >> b;
    primescreen(b);
    square();
    init(a);
    return 0;
}

void primescreen(int n) {
    for (int i = 2; i < n; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > n) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break; 
        }
    }
    return ;
}

void square() {
    for (int i = 0; i < 10; i++) {
        num[i * i] = 1;
    }
    return ;
}

void init(int a) {
    int sum = 0;
    for (int i = 1; i <= prime[0]; i++) {
        if (prime[i] < a) continue;
        int kh = prime[i] / 100, to = prime[i] % 100;
        if (num[kh] && num[to]) {
            sum && cout <<  " "; 
            cout << prime[i];
            sum ++;
        }
    }
    cout << endl;
    cout << sum << endl;
    return ;
}

