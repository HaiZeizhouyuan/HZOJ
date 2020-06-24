/*
	* File     : cha100.c
	* Author   : 
	* Mail     : 
	* Creation : 2020年04月26日 星期日 11时49分59秒
*/

#include <stdio.h>
float mon(int n){
	double num, mon1, mon2, mon3, mon4, mon5, mon6;
	num = 0;
	int i;
	for(i = 1; i <= 6; i++){
		num = (n+num) * (1 + 0.00417);
	}
	return num;
}
int main(){
	int n; 
	scanf("%d", &n);
	printf("$%.2f\n", mon(n));
	return 0;
}
