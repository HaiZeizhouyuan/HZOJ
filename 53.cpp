/*************************************************************************
	> File Name: 53.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu May 28 18:47:43 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 1000000

int prime[max_n + 5] = {0};
int f[max_n + 5] = {0};
int cnt[max_n + 5] = {0};
void init() {
    for (int i = 2; i <= max_n; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            f[i] = i + 1;
            cnt[i] = i * i;
        }
        for (int j = 1; j <= prime[0]; j++){
            if (i * prime[j] > max_n)  break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0){
                cnt[i * prime[j]] = cnt[i] * prime[j];
                f[i * prime[j]] = f[i] * (cnt[i] * prime[j] - 1 ) / ( cnt[i] - 1);
                break;
            } else {
                cnt[i * prime[j]] = prime[j] * prime[j];
                f[i * prime[j]] = f[i] * f[prime[j]];
            }
        }
    }
    return ;
}
int main(){
    init();
    long long max = 0;
    for (int i = 2; i <= max_n; i++ ) {
        if (f[i] > max) max = f[i];
    }
    cout << max << endl;
    return 0;
}
