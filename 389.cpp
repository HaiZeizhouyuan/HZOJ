/*************************************************************************
	> File Name: 389.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat Jul 25 11:33:02 2020
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;
#define max_n 100000

long long num[max_n + 5];

int func() {
    
}

long long search(int max_d) {
    long long l = 1, r = max_d;


}



int main () {
    long long m, n, temp, max_d = 0;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        cin >> num[i];
        max_d = max(max_d, num[i]);
    }
    sort(num, num + n);

    return 0;
}
