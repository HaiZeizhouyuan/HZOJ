/*************************************************************************
	> File Name: 194.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon May 18 17:39:19 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 100000

int num[max_n + 5] = {0};

inline void binary_search(int *num, int s, int n){
    for (int i = 0; i < n; i++){
        int f = i + 1, l = n - 1, x = s - num[i];
        while (f <= l) {
            int mid = (f + l) >> 1;
            if (num[mid] == x) {
                cout << "Yes" << endl;
                return ;
            }
            if (num[mid] < x) f = mid + 1 ;
            else l = mid - 1;
        }
    }
    cout << "No" << endl;
    return ;
    
}


int main(){
    int n, s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cin >> s;
    binary_search(num, s, n);
    return 0;
}
