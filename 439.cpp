/*************************************************************************
	> File Name: 439.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May 29 16:18:03 2020
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;

int check(double x){
    double d1 = 0, sum = 0, d2 = 2;
    while (d1 < x){
        d2 = 2 * pow(0.98, sum);
        d1 += d2;
        sum++;
    }
    
    return sum;
}
int main(){
    double x;
    cin >> x;
    cout << check(x) << endl;
    return 0;
}
