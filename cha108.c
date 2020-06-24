/*
	* File     : cha108.c
	* Author   : 
	* Mail     : 
	* Creation : 2020年04月28日 星期二 10时39分24秒
*/

#include <stdio.h>
int main(){
	char x;
	double a, b;
	scanf("%c",&x);
	scanf("%lf%lf", &a, &b);
	if(x == 'r') printf("%.2lf\n", a * b);
	if(x == 't') printf("%.2lf\n", a * b / 2);
	return 0;
}
