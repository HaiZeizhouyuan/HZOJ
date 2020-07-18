/*************************************************************************
	> File Name: 379.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat Jul 18 15:01:31 2020
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int n, x, op, top = -1, m = -1, k = 0;
    scanf("%d", &n);
    int re[n + 5];
    int *stack = (int *)malloc(sizeof(int) * n);
    int *mmax = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++){
        scanf("%d", &op);
        switch(op) {
            case 0:
                scanf("%d", &x);
                stack[++top] = x;
                if (m == -1) mmax[++m] = x;
                else mmax[++m] = (x > mmax[m - 1] ? x : mmax[m - 1]);
                break;
            case 1:
                if (m != -1) {
                    top -= 1;
                    m -= 1;
                }
                break;
            case 2:
                int max = 0;
                if (m != -1) max = mmax[m];
                re[k++] = max;
                break;
        }
    }
    for (int i = 0; i < k; i++) printf("%d\n", re[i]);
    free(stack);
    free(mmax);
    return 0;
}
