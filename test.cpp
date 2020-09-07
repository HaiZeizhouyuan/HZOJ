/*************************************************************************
	> File Name: test.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月03日 星期四 10时13分27秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
long long num[100000000];
int main() {
    long long  a, b, ans = 0;
    cin >> a >> b;
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            if (i == j) continue;
            for (int k = 3; k <= 17; k++) {
                for (int l = 1; l <= k; l++) {
                    if (l == 1 && j == 0) continue;
                    if (l != 1 && i == 0) break;
                    long long t = 0;
                    for (int m = 1; m <= k; m++) {
                        if (m == l) {
                            t = t * 10 + j;
                        } else {
                            t = t * 10 + i;
                        }
                    }
                    if (t >= a && t <= b) {
						num[ans++] = t;
					}
                }
            }
        }
    }
    sort(num, num + ans);
    for (int i = 0; i < ans; i++) {
        printf("%d : %lld\n", i, num[i]);
    }
    cout << ans << endl;
    return 0;
}

