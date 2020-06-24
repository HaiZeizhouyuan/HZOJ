/*************************************************************************
	> File Name: 118.c
	> Author: 
	> Mail: 
	> Created Time: Sun May  3 22:28:26 2020
 ************************************************************************/

#include<stdio.h>
void check(int y){
    int i;
    char arr[][17] = {"rat", "ox", "tiger", "rabbit", "dragon", "snake", "horse", "sheep", "monkey", "rooster", "dog", "pig"};
    if(y >= 1900) {
        i = y - 1900 - 12 * ((y - 1900) / 12);
        printf("%s\n",arr[i]);
    }else{
    i = 1900 - y - 12 * ((1900 - y) / 12 ); 
    printf("%s\n", arr[12 - i]);
    }
}
int main(){
    int y;
    scanf("%d", &y);
    check(y);
    return 0;
}
