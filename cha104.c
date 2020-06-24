/*
	* File     : cha104.c
	* Author   : 
	* Mail     : 
	* Creation : 2020年04月29日 星期三 01时07分03秒
*/

#include <stdio.h>
int is_check(int a){
	int b, t, o;
	b = a / 100;
	t = a % 100 / 10;
	o = a % 100 % 10;
	if(b == 9 || t == 9 || o == 9) return 0;
	return 1;
}
int main(){
	int a;
	scanf("%d", &a);
	printf("%s\n",is_check(a) ? "NO" : "YES");
	return 0;
}
