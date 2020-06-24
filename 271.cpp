/*************************************************************************
	> File Name: 271.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Jun 23 19:11:48 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 300000

int arr[max_n + 5];
int q[max_n + 5], head, tail;

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i ++) cin >> arr[i];
    head = tail = 0;
    for (int i = 0; i < n; i++) {
        while (tail - head && arr[i] < arr[q[tail - 1]])  tail--;
        q[tail++] = i;
        if (i + 1 < k) continue;
        if (i - q[head] == k) head++;
        i + 1 == k || cout << " ";
        cout << arr[q[head]];
    }

    cout <<  endl;
    head = tail = 0;
    for (int i = 0; i < n; i++) {
        while (tail - head && arr[i] >= arr[q[tail - 1]])  tail--;
        q[tail++] = i;
        if (i + 1 < k) continue;
        if (i - q[head] == k) head++;
        i + 1 == k || cout << " ";
        cout << arr[q[head]];
    }
    cout << endl;
    return 0;
}
