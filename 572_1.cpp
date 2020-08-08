/*************************************************************************
	> File Name: 572_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Aug  7 15:45:40 2020
 ************************************************************************/

#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;
#define max_n 400000

int n;
long long A[max_n + 5], B[max_n + 5], ans[max_n + 5];
int main () {
    priority_queue<int> que;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%lld", &A[i]);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &B[i]);
        que.push(A[0] + B[i]);
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            long long sum = A[i] + B[j];
            if (sum < que.top()) {
                que.pop();
                que.push(sum);
            } else {
                break;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        ans[i] = que.top();
        que.pop();
    }

    for (int i = n - 1; i >= 0; i--) printf("%lld\n", ans[i]);
    return 0;
}
