/*************************************************************************
	> File Name: 254.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu Jun 11 09:43:38 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
#define max_n 50000

typedef struct cows{
    int st, et, node, loc;
} Cows;

Cows cows[max_n + 5];
bool cmp1(Cows a, Cows b){
    if (a.st == b.st) return a.loc < b.loc;
    else return a.st < b.st;
}
bool cmp2(Cows a, Cows b) {
    return a.loc < b.loc;
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> cows[i].st >> cows[i].et;
        cows[i].node = 0;
        cows[i].loc = i;
    }
    sort(cows, cows + n, cmp1);
    int sum = 0, k = 1;
    for (int i = 0; i < n; i++) {
        if (cows[i].node == 0) {
            cows[i].node += k;
            sum += 1;
            k += 1;
        }
        for (int j = i + 1; j < n; j++) {
            if (cows[j].node) continue;
            if (cows[i].et < cows[j].st) {
                cows[j].node = cows[i].node;
                break;
            }
        }
    }
    sort(cows, cows + n, cmp2);
    cout << sum << endl;
    for (int i = 0; i < n; i++) {
        cout << cows[i].node << endl;
    }
    return 0;
}
