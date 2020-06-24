/*************************************************************************
	> File Name: 448.c
	> Author: 
	> Mail: 
	> Created Time: Wed May  6 11:33:29 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int l, m;
    scanf("%d%d", &l, &m);
    int o[10005], e[10005], sum[10005] = {0} ;
    for (int i = 0; i < m; i++) {
        scanf("%d%d", &o[i], &e[i]);
        for (int j = o[i]; j < (e[i] + 1); j++) {
            sum[j] = 1;
        }
    }
    int num = 0;
    for (int i = 0; i < l + 1; i++) {
        if (sum[i] == 0) {
            num ++;
        }
    }
    printf("%d\n", num);
    return 0;
}
