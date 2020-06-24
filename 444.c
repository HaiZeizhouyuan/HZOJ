/*************************************************************************
	> File Name: 444.c
	> Author: 
	> Mail: 
	> Created Time: Thu May 14 10:41:45 2020
 ************************************************************************/

#include<stdio.h>
void rea(int *num, int x, int n){
    int last = num[n -1];
    for (int i = n -1 ;i > x - 1; i--) {
        num[i] = num[i - 1];
    }
    num[x - 1] = last;
    for (int i = 0; i < n; i++) {
        printf("%d", num[i]);
        (i - n + 1) && printf(" ");
    }
    printf("\n");
}
int main() {
    int n;
    scanf("%d", &n);
    int num[n + 5];
    for(int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    } 
    int x;
    scanf("%d", &x);
    rea(num, x, n);

    return 0;
}
