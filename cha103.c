/*
	* File     : cha103.c
	* Author   : 
	* Mail     : 
	* Creation : 2020年04月28日 星期二 01时32分15秒
*/

#include <stdio.h>
int divid(int a,int b){
	if(a % b == 0) return 0;
	return 1;
}
int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	printf("%s\n", divid(a,b) ? "NO" : "YES" );	
	return 0;
}
