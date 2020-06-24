/*
	* File     : cha92.c
	* Author   : 
	* Mail     : 
	* Creation : 2020年04月26日 星期日 00时41分13秒
*/

#include <stdio.h>
#define pi 3.14
int main(){
	double r, S, L;
	scanf("%lf", &r);
	S = pi * r * r;
	L = 2 * pi * r;
	printf("%.2f\n%.2f\n", L, S);
	return 0;
}
