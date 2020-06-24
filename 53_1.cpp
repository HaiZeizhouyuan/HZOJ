/*************************************************************************
	> File Name: 53_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu May 28 19:46:27 2020
 ************************************************************************/

#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
#define max_n 1000000

int f[max_n + 5] = {0};

void init () {
	for (int i = 1; i <= max_n; i++) {
        f[i] += i;
        for (int j = 2; i * j <= max_n; j++ ) {
            f[j * i] += i; 
        }
    }
    return ;
}


int main(){
    init();
    int max = 0;
    for (int i = 2; i <= max_n; i++) {
        if(f[i] > max) max = f[i];
    }
    cout << max << endl;
    return 0;
}
