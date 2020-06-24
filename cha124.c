/*
	* File     : cha124.c
	* Author   : 
	* Mail     : 
	* Creation : 2020年04月29日 星期三 00时39分05秒
*/

#include <stdio.h>
int check(int a, int b, int c,int d){
    return (1 <= a || b <= 50) && ( c <= 25 || 5 <= d);
}
int main(){
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
    printf("%s\n", check(a, b, c, d) ? "ok" : "pass");

	return 0;
}
