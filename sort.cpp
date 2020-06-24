/*************************************************************************
	> File Name: sort.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun May 17 19:44:58 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
#define max_n 30
int arr[max_n + 5] = {0};
int cmp (int a, int b) {
    return a > b;
}
int main() {
    int n, k, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> k;
    sort(arr, arr + n, cmp);
    for (int  i = 0 ; i < k; i++) {
        sum += arr[i];
    }
    printf("%.2lf\n", 1.0 * sum /k);
    
    return 0;
}
