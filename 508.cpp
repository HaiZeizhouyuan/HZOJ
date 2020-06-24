/*************************************************************************
	> File Name: 508.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Jun 10 16:07:49 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
#define max_n 1000

void init(int, int *);
int times[max_n + 5];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> times[i];
    }
    init(n, times);
    return 0;
}

void init(int n, int *times) {
    int alltime = 0;
    sort(times,times + n);
    for (int i = n - 1; i >= 0; i -= 2) {
        if (i == 0) {
            alltime += times[0]; 
            break;
        } else if (i == 1) {
            alltime += times[1]; 
            break;
        } else if (i == 2) {
            alltime += times[1] + times[0] + times[2]; 
            break;
        } else {
            int a = times[1] + times[0] + times[i] + times[1];
            int b = times[i] + times[0] + times[i - 1] + times[0];
            alltime += min(a, b);
        }
    }

    cout << alltime << endl;
    return ;
}
