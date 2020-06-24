/*
	* File     : cha90.c
	* Author   : 
	* Mail     : 
	* Creation : 2020年04月25日 星期六 23时49分59秒
*/

#include <stdio.h>
int main(){
   int a, bd ,td, d;
   scanf("%d", &a);
   bd = a /100;
   td = a % 100 / 10;
   d =  a % 100 % 10;
   printf("%d\n%d\n%d\n", bd, td, d);
   return 0;
}
