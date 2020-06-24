/*************************************************************************
	> File Name: 160.c
	> Author: 
	> Mail: 
	> Created Time: Fri May  1 16:25:10 2020
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define PI 3.14
int main(){
    double r,h,S1,S2;
    scanf("%lf%lf", &r ,&h);
    S1 = (PI  / 2 + 2 ) * pow(r ,2);
    S2 = h * (r * (PI + 2 ) + sqrt(8 * pow(r, 2)));
    printf("%.2f\n", 2 * S1 + S2);
    return 0;
}
