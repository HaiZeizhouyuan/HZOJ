/*************************************************************************
	> File Name: 445.c
	> Author: 
	> Mail: 
	> Created Time: Thu May 14 11:12:29 2020
 ************************************************************************/
#include<stdio.h>
int check(int *len, int n){
    int num3 = 0;
    for (int i = 0; i < n; i++) {
        int num1 = 0, num2 = 0;
        if(i == 0) num1 = 0;
        if(i == n - 1) num2 = 0;
        for (int j = 0; j < i; j++) {
            if (len[j] > len[i]) num1++;
        }
        for (int j = i + 1; j < n; j++) {
            if (len[j] > len[i]) num2++;
        }
        if(num1 == num2) num3++;
    }
        return num3;
}
int main(){
    int n;
    scanf("%d", &n);
    int len[n + 5];
    for (int i = 0; i < n; i++) {
        scanf("%d", &len[i]);
    }
    printf("%d\n", check(len, n));
    return 0;
}
