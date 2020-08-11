/*************************************************************************
	> File Name: 446_1.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: Tue Aug 11 08:43:58 2020
 ************************************************************************/

#include <stdio.h>
#define min(i, j) ((i) < (j) ? (i) : (j))
#define max(i, j) ((i) > (j) ? (i) : (j))

int main() {
    int n;
    scanf("%d", &n);
    int num[n + 5][n + 5];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            j && printf(" ");
            if (i + j < n) printf("%d", min(i, j) + 1);
            else printf("%d", n - max(i, j));
            !(j - n + 1) && printf("\n");
        }
    }
    return 0;
}
