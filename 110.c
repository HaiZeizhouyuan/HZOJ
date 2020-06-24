/*************************************************************************
	> File Name: 110.c
	> Author: 
	> Mail: 
	> Created Time: Sat May  2 20:18:59 2020
 ************************************************************************/

#include<stdio.h>
double check(double m){
    double m1, m2;
    m1 = 6 * m;
    m2 = 15 * 6 + 9 * (m -15);
    if(m  <= 15) return m1;
    return m2;

}
int main(){
    double n;
    scanf("%lf", &n);
    printf("%.2lf\n", check(n));
    return 0;
}
