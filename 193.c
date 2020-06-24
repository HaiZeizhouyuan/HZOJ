/*************************************************************************
	> File Name: 193.c
	> Author: 
	> Mail: 
	> Created Time: Mon May 18 01:05:47 2020
 ************************************************************************/

#include<stdio.h>
#define max_n 100000
int num[max_n + 5] = {0};
inline void binary_search(int *num, int r , int l, int x) {
    while (r <= l) {
        int mid = (l + r) >> 1;
        if (num[mid] == x) {
            printf("Yes\n");
            return ;
        }
        if (num[mid] < x) r = mid + 1;
        else l = mid - 1;
    }
    printf("No\n");
    return ;
}
int main () {
    int n, k, s;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    scanf("%d%d", &k, &s);
    int x = s - k;
    binary_search(num, 0, n-1, x);
    return 0;
}

