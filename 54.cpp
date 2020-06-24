/*************************************************************************
	> File Name: 54.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat May 23 16:46:32 2020
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define max_n 1500

int ans[max_n + 5];
int sum[max_n + 5];

void carry(int *arr) {
    for (int i = 1; i <= arr[0]; i++) {
        if(arr[i] < 10) continue;
        arr[i + 1] += arr[i] / 10;
        arr[i] %= 10;
        arr[0] += (i == arr[0]);    
    }
    return ;
}

void solve(int x) {
    memset(ans, 0, sizeof(ans));
    memset(sum, 0, sizeof(sum));
    ans[0] = ans[1] = sum[0] = sum[1] = 1;
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= ans[0]; j++) ans[j] *= i;
        carry(ans);
    }

    for (int i = 1; i <= ans[0]; i++) {
        if (!ans[i]) continue;
        for (int j = 1; j <= sum[0]; j++) sum[j] *= ans[i];
        carry(sum);
    }

    for (int i = sum[0]; i > 0; i--) {
        printf("%d", sum[i]);
    }
    printf("\n");
}

int main(){
    int x;
    while (~scanf("%d", &x)) {
        solve(x);
    }  
    return 0;
}

