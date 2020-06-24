/*************************************************************************
	> File Name: 208.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Jun  8 15:21:09 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
void tick(int *score, int, int);
int score[105] = {0};

int main() {
    int m, n;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        score[temp]++;

    }
    cin >> n;
    tick(score, m, n);
    return 0;
}


void tick(int *score, int m, int n) {
    int flag = 1;
    for (int i = 100; i >= 0 && flag; i--) {
        if (score[i] >= n) {
            cout << score[i] << endl; flag = 0;

        }
    }
    return ;
}
