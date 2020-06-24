/*************************************************************************
	> File Name: 130.c
	> Author: 
	> Mail: 
	> Created Time: Sat May  2 21:02:41 2020
 ************************************************************************/

#include<stdio.h>
double check(int m, int n) {
    double  num = 0;
    for(int i = 0; i < n; i ++) {
        num= (m + num) * (1 + 0.00417);
    }
    return num;

}
int main(){
    int m, n;
    scanf("%d%d", &m, &n);
    printf("$%.2lf\n", check(m, n));
    return 0;
}
