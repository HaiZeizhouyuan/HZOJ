/*************************************************************************
	> File Name: 161.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May 29 13:45:32 2020
 ************************************************************************/

#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
    int x, n;
    double sum;
    cin >> x >> n;
    sum = x * pow (1.06, n);
    printf("%.6lf\n", sum);
    return 0;
}
