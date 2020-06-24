/*************************************************************************
	> File Name: 192.c
	> Author: 
	> Mail: 
	> Created Time: Sun May 17 12:50:22 2020
 ************************************************************************/

#include<stdio.h>
#include<math.h>
inline double func(double x) {
    return x * exp(x);
}
inline double binary_search(double f, double t, double a){
    while (t - f > 0.000001){
        double  mid = (f + t) / 2;
        if (func(mid) > a) t = mid;
        else f = mid;
    }
    return t;
}
int main() {
    double a;
    scanf("%lf", &a);
    printf("%.4lf\n",binary_search(0, 30, a));
    return 0;
}
