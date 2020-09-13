/*************************************************************************
	> File Name: 586.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月13日 星期日 11时06分53秒
 ************************************************************************/

#include<iostream>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
int x, y, z; 
int min_num, max_num;
int mark[10] = {1, 0};
int func(int val) {
    if (val < 100) return 0;
    int tmp = val;
   // cout << "tmp : " << tmp << endl;
    while(tmp) {
        if (mark[tmp % 10]) return 0;
        mark[tmp % 10] = 1;
        tmp /= 10;
    }
    return 1;
}

int main() {
    cin >> x >> y >> z;
    for (int i = 100; z * i / x < 1000; i++) {
        memset(mark, 0, sizeof(mark));
        mark[0] = 1;
        if (func(i) && func(y * i / x) && func(z * i / x)) cout << i << " " << y * i / x << " " << z * i / x << endl;
    }
 
    return 0;
}
