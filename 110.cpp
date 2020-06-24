/*************************************************************************
	> File Name: 110.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat May  2 20:05:11 2020
 ************************************************************************/

#include<iostream>
using namespace std;
int check(int m){
    int m1, m2;
    m1 = 6  * m;
    m2 = 6 * 15 + 9 * (m - 15);
    if(m <= 15) return m1;
    return m2;

}
int main(){
    double x;
    cin >> x;
    printf("%.2lf", check(x)); 
    return 0;
}
