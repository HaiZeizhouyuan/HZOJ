/*************************************************************************
	> File Name: 515.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年10月22日 星期四 19时26分01秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
 
int main() {
    int a, b, l, r_a, r_b;
    double min_d = 1000000;
    cin >> a >> b >> l;
    double flag = a * 1.0 / b;
    for (int i = 1; i <= l; i++) {
        for (int j = 1; j <= l; j++) {
            double temp = i * 1.0 / j;
            if ((temp >= flag) && ((temp - flag) < min_d)) {
                min_d = temp - flag;
                r_a = i, r_b = j;
            }
        }
    }
    cout << r_a << " " << r_b << endl;
    return 0;
}
