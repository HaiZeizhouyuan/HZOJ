/*************************************************************************
	> File Name: 258.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu Jun 18 16:39:01 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 100
int num[max_n + 5][max_n + 5];

int init(int, int(*num)[max_n + 5]);

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> num[i][j];
            num[i][j] += num[i - 1][j];
        }
    }
   
    cout << init(n, num) << endl;

    return 0;
}

int init(int n, int (*num)[max_n + 5]) {
    int ans = 0x80000000;
    for (int i = 1; i <= n; i++ ) {
        for (int j = i; j <= n ; j++) {
        int smin = 0, sum = 0, temp = 0x80000000;
            for (int k = 1; k <= n; k++) {
                sum += num[j][k] - num[i - 1][k];
                temp = max(temp, sum - smin);
                smin = min(sum, smin);
            }
            ans = max(ans, temp);
        }
    }
    return ans;
}
