/*
	* File     : cha102.c
	* Author   : 
	* Mail     : 
	* Creation : 2020年04月26日 星期日 13时25分31秒
*/

#include <stdio.h>
double out(int a, int b, int c, int t){
	double T;
	float input = a * b * (c - t);
	T = input / (b * c + a * c -a * b);
	return T;
}
int main(){
	int a, b, c, t;
	scanf("%d%d%d%d", &a, &b, &c, &t);
	printf("%.2lf\n",out(a, b, c, t));
	return 0;
}
