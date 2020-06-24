/*************************************************************************
	> File Name: 253.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Jun 10 19:35:27 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
#define max_n 2500
typedef struct cow {
    int min, max;
} Cow;

Cow cow[max_n + 5];
int sun[max_n + 5] = {0};

bool cmp (Cow a, Cow b) {
    if (a.max - b.max) return a.max < b.max;
    return a.min > b.min;
}

int main() {
    int c, l, sumcow = 0, num, sum;
    cin >> c >> l;
    for (int i = 0; i < c; i++) {
        cin >> cow[i].min >> cow[i].max;
    }

    for (int i = 0; i < l; i++) {
        cin >> num >> sum;
        sun[num] += sum;
    }

    sort(cow, cow + c, cmp);

    for (int i = 0; i < c; i++) {
        for (int j = cow[i].min; j <= cow[i].max; j++) {
            if (!sun[j]) continue;
            sun[j] -= 1;
            sumcow += 1;
            break;
        }
    }
    cout << sumcow << endl;
    return 0;
}
