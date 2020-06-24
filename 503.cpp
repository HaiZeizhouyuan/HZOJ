/*************************************************************************
	> File Name: 503.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Jun  3 19:00:53 2020
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
#define max_n 30000

int weight[max_n + 5];
int check(int w, int n, int *weight){
    int num = 0;
    for (int i = 0; i < n; i++) {
        if (!weight[i]) continue;
        int flag = 1;
        for (int j = n - 1; flag && j > i; j--) {
            if (!weight[j]) continue;
            if (weight[i] + weight[j] > w) continue;
            //cout << weight[i] << "and"<< weight[j] << endl;
            weight[j] = 0;
            num += 1;
            flag = 0;
        }
    }
    return num;
}


int main() {
    int w, n;
    cin >> w >> n;
    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }
    sort(weight, weight + n);
    int sum = check(w, n, weight);
    sum += n - 2 * sum;
    cout << sum << endl;
    return 0;
}
