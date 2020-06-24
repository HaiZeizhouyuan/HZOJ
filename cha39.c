/*
	* File     : cha39.c
	* Author   : 
	* Mail     : 
	* Creation : 2020年04月27日 星期一 23时06分24秒
*/

#include <stdio.h>
int _even(int begin, int n){
	if(begin > 0 && begin % 2 != 0) begin = begin + 1;
	if(begin > 0 && begin % 2 == 0)  begin = begin;
	if(begin < 0)  begin = 0;
	return begin;
}
int main(){
	int begin, n, i, even;
	scanf("%d%d", &begin, &n);
	begin = _even(begin, n);
	for(i = 0; i < n; i++){
		even = begin;
		begin += 2;
		printf("%d\n", even);
	}
	return 0;
}
