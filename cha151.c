/*
	* File     : cha151.c
	* Author   : 
	* Mail     : 
	* Creation : 2020年04月29日 星期三 10时06分06秒
*/

#include <stdio.h>
int mora(char a, char b) {
	if (a == b) return 0;
	if ((a == 'Y' && b == 'H') || (a == 'O' && b == 'Y') || (a == 'H' && b == 'O')) return 1;
	return -1;
}

int main(){
	char xl,xr,ll,lr,ch,cl;
	scanf("%c%c%c%c", &xl, &ch, &xr, &cl);
	scanf("%c%c%c", &ll, &ch, &lr);
	if (mora(xl,ll) == 1) {
		if (mora(xl,lr) != -1) printf("%s\n", "MING");
		if (mora(xl,lr) == -1) {
			if(mora(xr,lr) == 1) printf("%s\n", "MING");
			if(mora(xr,lr) != 1) printf("%s\n", "LIHUA");
		}
		
	} 
	if(mora(xl, ll) == 0){
		if (mora(xr,lr) == 1) printf("%s\n", "MING");
		if (mora(xr,lr) == -1) printf("%s\n", "LIHUA");
		if (mora(xr,lr) == 0) printf("%s\n", "TIE");
	}
	if (mora(xl,ll) == -1) {
		if (mora(xr,ll) != 1) printf("%s\n", "LIHUA");
		if (mora(xr,ll) == 1) {
			if(mora(xr,lr) != -1) printf("%s\n", "MING");
			if(mora(xr,lr) == -1) printf("%s\n", "LIHUA");
		}
	}
	return 0;
}
