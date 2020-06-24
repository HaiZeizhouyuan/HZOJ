/*************************************************************************
	> File Name: 195.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon May 18 20:02:31 2020
 ************************************************************************/

#include<iostream>
#include <string.h>
using namespace std;
#define max_n 100000

int num[max_n + 5] = {0};

inline int binary_search(int *arr, int n, int x) {
    int head = -1, tail = n - 1, mid;
    while(head < tail){
        mid = (head + tail + 1) >> 1;
        if (arr[mid] > x) tail = mid - 1;
        else head = mid;
    }
    return head; 
}


int main(){
    int n, m, temp;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    int a = num[0];
    for (int i = 0; i < m; i++) {
        cin >> temp;
        i && cout << " ";
        int b = binary_search(num, n, temp);
        if (b == -1) cout << a;
        else cout << num[b]; 
    }
    cout << endl;

    return 0;
}
