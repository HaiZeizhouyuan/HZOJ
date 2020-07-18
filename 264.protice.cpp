/*************************************************************************
	> File Name: 264.protice.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Jun 24 16:00:36 2020
 ************************************************************************/

#include<iostream>
#include<stack>
using namespace std;

#define max_n 100000

long long arr[max_n + 5];
long long l[max_n + 5], r[max_n + 5];

int main() {
    stack<int> s;
    long long n;
    cin >> n;
    arr[0] = arr[n + 1] = -1;
    for (long long i = 1; i <= n; i++) cin >> arr[i];
    s.push(0);
    for (long long i = 1; i <= n; i++) {
        while(arr[i] <= arr[s.top()]) s.pop();
        l[i] = i - s.top();
        s.push(i);
    }

    while (!s.empty()) s.pop(); 
    s.push(n + 1);
    for (long long i = n; i >= 1; i--) {
        while(arr[i] <= arr[s.top()]) s.pop();
        r[i] = s.top() - i;
        s.push(i);
    }

    long long ans = 0;
    for (long long i = 1; i <= n; i++) {
        ans = max(ans, arr[i] * (l[i] + r[i] - 1));
    }
    cout << ans << endl;
    return 0;
}
