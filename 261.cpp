#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
#include <stack>
using namespace std;
#define MAX_N 1000
long long sum[MAX_N + 5];
long long f[MAX_N + 5];
int k;
int main() {
    int n;
    f[0] = 0x8000000000000000LL;
    stack<long long> s1, s2;
    char op[10];
    cin >> n;
    while (n--) {
        cin >> op;
        switch (op[0]) {
            case 'I': {
                long long x;
                int ind;
                cin >> x;
                s1.push(x);
                ind = s1.size();
                sum[ind] = sum[ind - 1] + x;
                f[ind] = max(f[ind - 1], sum[ind]);
            } break;
            case 'D': {
                if (!s1.empty()) s1.pop();
            } break;
            case 'L': {
                if (s1.empty()) break;
                s2.push(s1.top());
                s1.pop();
            } break;
            case 'R': {
                if (s2.empty()) break;
                s1.push(s2.top());
                int ind = s1.size();
                sum[ind] = sum[ind - 1] + s2.top();
                f[ind] = max(f[ind - 1], sum[ind]);
                s2.pop();
            } break;
            case 'Q': {
                cin >> k;
                cout << f[k] << endl;
            } break;
        }
    }
    for (int i = 0; i < k; i++) {
        cout << f[i] << endl;
    }
    return 0;
}
