/*
	* File     : cha114.c
	* Author   : 
	* Mail     : 
	* Creation : 2020年04月28日 星期二 23时13分03秒
*/

#include <stdio.h>
void output(char x) {
    switch (x) {
        case 'h':
            printf("He\n");
            break;
        case 'l':
            printf("Li\n");
            break;
        case 'c':
            printf("Cao\n");
            break;
        case 'd':
            printf("Duan\n");
            break;
        case 'w':
            printf("Wang\n");
            break;
        default:
            printf("Not Here\n");
            break;
    }
}
int main(){
	char x;
	scanf("%c", &x);
    output(x);
	return 0;
}
