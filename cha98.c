/*
	* File     : cha98.c
	* Author   : 
	* Mail     : 
	* Creation : 2020年04月28日 星期二 10时24分15秒
*/

#include <stdio.h>
#define pi 3.14
int main(){
	double r, h, S, V;
	scanf("%lf%lf", &r, &h);
	S = r * r *pi; 
	V = S * h;
	printf("%.2lf\n%.2lf\n", S , V);
	return 0;
}
