/*************************************************************************
	> File Name: 242.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon May 18 22:06:14 2020
 ************************************************************************/

#include<iostream>
using namespace std;

#define max_n 100000
int num[max_n + 5] = {0};
int main(){
    int n, m, sum = 0;
    cin >> n >> m;
    for (int i = 1; i < n + 1; i++){
        cin >> num[i];
        if (num[i] >= m) sum += num[i];
    }
    
    return 0;
}
