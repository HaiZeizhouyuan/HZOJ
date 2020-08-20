/*************************************************************************
	> File Name: 534.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Jun 19 00:00:40 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int n, num[25], mark[1005] = {1}, ans = 0;

void func (int q, int sum) {
    if (mark[sum] == 0) {
        ans += 1;
        mark[sum] = 1;
    }

    for (int i = q; i < n; i++) {
        sum += num[i];
        func(i + 1, sum);
        sum -= num[i];
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    func(0, 0);
    cout << ans << endl;
    return 0;
}
