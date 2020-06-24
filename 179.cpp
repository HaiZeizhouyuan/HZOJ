/*************************************************************************
	> File Name: 179.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat May 30 01:04:39 2020
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define EPSL 1e-6
int p, q;
inline double fac(double x){
    return p * x + q;
}

inline double find(double f, double l, int p, int q){
    double first = f, tail = l, mid;
    while (fabs(first - tail) > EPSL){
        mid = (first + tail)  / 2;
        if (fac(first) * fac(mid) > 0) first = mid;
        else tail = mid;
    }
    return mid;
}
int main(){
    cin >> p >> q;
    printf("%.4lf\n", find(-20, 20, p, q));
    return 0;
}
