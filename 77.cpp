/*************************************************************************
	> File Name: 77.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon May 25 18:46:02 2020
 ************************************************************************/

#include<stdio.h>

#define max_n 101

char str[max_n + 5];
int ans[max_n + 5] = {1, 1, 0};

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++) {
        for (int j = 1; j <= ans[0]; j++) ans[j] *= n;
        for (int k = 1; k <= ans[0]; k++) {
            if (ans[k] < 10)  continue;
            ans[k + 1] += ans[k] / 10;
            ans[k] %= 10;
            ans[0] += (ans[0] == k);
        }
    }

    for (int i = ans[0]; i > 0; i--) {
        printf("%d", ans[i]);
    }
    printf("\n");
}
