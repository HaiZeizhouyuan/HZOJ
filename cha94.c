/*
	* File     : cha94.c
	* Author   : 
	* Mail     : 
	* Creation : 2020年04月26日 星期日 00时46分55秒
*/

#include <stdio.h>
int main(){
	float w, h;
	double BMI;
	scanf("%f%f", &w, &h);
	BMI = w / (h * h);
	printf("%.2f\n", BMI);

	return 0;
}

