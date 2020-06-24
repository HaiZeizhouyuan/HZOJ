/*
	* File     : cha101.c
	* Author   : 
	* Mail     : 
	* Creation : 2020年04月26日 星期日 12时56分29秒
*/

#include <stdio.h>
int sum(int n){
	int sum, ttd, thd ,bd ,td, d;
	ttd = n / 10000;
	thd = n % 10000 / 1000;
	bd = n % 10000 % 1000 / 100;
    td = n % 10000 % 1000 % 100 /10;
	d = n % 10000 % 1000 % 100 % 10;
	sum = ttd + thd + bd + td + d;
	return sum;
}
int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", sum(n));
	return 0;
}

