/*
	* File     : cha109.c
	* Author   : 
	* Mail     : 
	* Creation : 2020年04月28日 星期二 11时30分11秒
*/

#include <stdio.h>
int is_check(int n){
	int th, b, t, o;
	th = n / 1000;
	b = n % 1000 / 100;
	t = n % 1000 % 100 / 10;
	o = n % 1000 % 100 % 10;
	if(th % 2 == 0 || b % 2 == 0 || t % 2 == 0 || o % 2 == 0) return 0;
	return 1;
	
}
int main(){
	int n;
	scanf("%d", &n);
	printf("%s\n",is_check(n) ? "NO" : "YES");
	return 0;
}
