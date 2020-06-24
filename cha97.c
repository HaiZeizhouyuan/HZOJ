/*
	* File     : cha97.c
	* Author   : 
	* Mail     : 
	* Creation : 2020年04月26日 星期日 10时52分06秒
*/

#include <stdio.h>
long sum(long n){
	long sum;
	sum = n * (1 + n) / 2;
	return sum;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%ld\n", sum(n));
	return 0;
}
