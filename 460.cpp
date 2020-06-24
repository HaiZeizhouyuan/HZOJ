/*************************************************************************
	> File Name: 460.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Jun 10 12:44:57 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 1000
void init(int, int);

typedef struct monkey {
    int node;
} MOnkey;

MOnkey mon[max_n + 5];

void init(MOnkey *mon, int, int);
int main () {
    int n, k;
    cin >> n >> k;
    init (mon, n, k);
    return 0;
}

void init(MOnkey *mon, int n, int k) {
    for (int i = 0; i < n; i++) {
        mon[i].node = i + 1;
    }
    int num = 0, sum = n;
    long long j = -1;
    while (sum != 1){
        j++;
        if (!mon[j % n].node) continue;
        num++;
        if (num - k) continue;
        mon[j % n].node = 0;
        sum -= 1;
        num = 0;

    }
    int flag = 1;
    for (int i = j + 1; flag != 0; i++) {
        if (!mon[i % n].node)  continue;
        else {
            flag = 0;
            cout << mon[i % n].node << endl;
        } 
    }
    return ;
}
