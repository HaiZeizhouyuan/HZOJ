/*
	* File     : cha70.c
	* Author   : 
	* Mail     : 
	* Creation : 2020年04月28日 星期二 00时03分36秒
*/

#include <stdio.h>
int ugnum(int i){
	while(i % 2 == 0) i = i / 2;
	while(i % 3 == 0) i = i / 3;
	while(i % 5 == 0) i = i / 5;
	if(i == 1) return 0;
	return 1;
}
int main(){
	int n, i;
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		if(ugnum(i) == 0) printf("%d\n", i);
	}
	return 0;
}
