/*
	* File     : cha95.c
	* Author   : 
	* Mail     : 
	* Creation : 2020年04月26日 星期日 10时39分09秒
*/

#include <stdio.h>
int ex(int n){
	int a,b,c;
	a = n / 10;
	b = n % 10;
	c = b * 10 + a;
	return c;
}
int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n",ex(n));
	return 0;
}
