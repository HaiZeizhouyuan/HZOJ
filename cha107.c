/*
	* File     : cha107.c
	* Author   : 
	* Mail     : 
	* Creation : 2020年04月28日 星期二 01时46分27秒
*/

#include <stdio.h>
int qio(int n){
	if(n % 7 == 0 && n % 2 != 0) return 0;
	return 1;
}
int main(){
	int n;
	scanf("%d", &n);
	printf("%s\n", qio(n) ? "NO":"YES");
	return 0;
}

