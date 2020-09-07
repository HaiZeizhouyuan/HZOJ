/*************************************************************************
	> File Name: 57.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Aug  7 18:35:04 2020
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define max_n 185200
int check(int m, int i, int d) {
    int t = m / pow(10, d - i);
    return t % 10;
}
int func (int n, int *num) {
    int n_start, n_i;
    if (n >= num[0] && n <= num[1]) return n;
    for (int i = 1; i <= 5; i++){
        if (num[i] < n && n <= num[i + 1]) {
            n_start = num[i] + 1;
            n_i = i + 1;
        } 
    }
    int a = (n - n_start) / n_i;
    int b = (n - n_start) % n_i;
    return check(a + pow(10, n_i - 1), b + 1, n_i);

}
int num[10];
int main() {
    int x, y, z, sum = 0;
    scanf("%d%d%d", &x, &y, &z);
    num[0] = 1;
    for (int i = 1; i < 6; i++) {
        sum += 9 * pow(10, i - 1) * i;
        num[i] = sum;
    }
    /*for (int i = 1; i < 6; i++) {
        printf("%d\n", num[i]);
    }*/
    num[6] = 1000000;   
    int dx, dy, dz;
    dx = func(x, num);
    dy = func(y, num);
    dz = func(z, num);
    printf("%d\n", dx * dy * dz);
    return 0;
}
