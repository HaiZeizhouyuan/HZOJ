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
    for (int i = 1; i <= n; i++) {
        cin >> times[i];
    }
    init(n, times);
    return 0;
}

void init(int n, int *times) {
    int alltime = 0;
    sort(times + 1,times + n  + 1);
    for (int i = n; i > 0; i -= 2) {
        if (i == 1) {
            alltime += times[1]; 
            break;
        } else if (i == 2) {
            alltime += times[2]; 
            break;
        } else if (i == 3) {
            alltime += times[3] + times[1] + times[2]; 
            break;
        } else {
            int a = times[2] + times[1] + times[i] + times[2];
            int b = times[i] + times[1] + times[i - 1] + times[1];
            alltime += min(a, b);
        }
    }

    cout << alltime << endl;
    return ;
}
