/*
	* File     : cha126.c
	* Author   : 
	* Mail     : 
	* Creation : 2020年04月26日 星期日 00时54分04秒
*/

#include <stdio.h>
#define pi 3.14
int main(){
	double R, r, S1, S2, S3;
	scanf("%lf%lf", &R, &r);
	S1 = pi * R * R;
	S2 = pi * r * r;
	S3 = S1 - S2;
	printf("%.2f\n",S3);
	return 0;
}
