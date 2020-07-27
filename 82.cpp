/*************************************************************************
	> File Name: 82.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat Jul 25 10:42:25 2020
 ************************************************************************/

#include <stdio.h>
#define max_n 1000000

long long h[max_n + 5];

long long fa_length (long long standlen, long long n, long long  *h) {
    long long relen = 0;
    for (int i = 0; i < n; i++) {
        if (h[i] > standlen) relen += h[i] - standlen;
    }
    return relen;
}

long long search(long long maxh, long long m, long long n, long long *h) {
    long long l = -1, r = maxh, mid;
    while (l < r) {
        mid = (l + r + 1) / 2;
        if (fa_length(mid, n, h) >= m) l = mid;
        else r = mid - 1;
    }
    return l;
}

int main () {
    long long n, m, temp, maxh = 0;
    scanf("%lld%lld", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &temp);
        h[i] = temp;
        if (temp > maxh) maxh = temp;
    }
    printf("%lld\n", search(maxh, m, n, h));

    return 0;
}
