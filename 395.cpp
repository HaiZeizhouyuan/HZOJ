/*************************************************************************
	> File Name: 395.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Aug  5 18:53:27 2020
 ************************************************************************/

#include<stdio.h>
#define max_n 500

int num[max_n + 5];
int sum[max_n + 5];
int m, k;
int binary_search(int ave, int q) {
    int l = q - 1, r = m, mid;
    while(l < r) {
        mid = (l + r + 1) >> 1;
      //  printf("l = %d, r = %d, mid = %d, sum[mid] = %d\n", l, r, mid, sum[mid] - sum[q- 1]);
        if (sum[mid] - sum[q - 1]<= ave) l = mid;
        else r = mid - 1;
    }
    return l; 
}
int main () {
    scanf("%d%d", &m, &k);
    for (int i = 1; i <= m; i++) {
        scanf("%d", &num[i]);
        sum[i] = num[i] + sum[i -1];
    }
    int ave = sum[m] / k;
    int q = 1;
    for (int i = 0; i < k; i++) {
        int last = binary_search(ave, q);
        if (i < k - 1) printf("%d %d\n", q, last);
        else printf("%d %d\n", q, m);
        q = last + 1;
    }
    
    
    return 0;
}
