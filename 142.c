/*************************************************************************
	> File Name: 142.c
	> Author: 
	> Mail: 
	> Created Time: Fri May  1 21:26:07 2020
 ************************************************************************/

#include<stdio.h>
#define swap(a, b){\
  _type(a) _temp = a;\
  a = b; b = _temp;\
}
int chh(int n){
    int sum = 0, temp = n;
    while (temp) {
        sum = sum * 10 + temp % 10;
        temp /= 10;
    }
    return sum == n;
}

int chk(int n){
    for(int i = 2; i * i <= n; i++ ){
        if(n % i == 0) return 0;    
    }
    return 1;
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int flag = 0;
    for(int i = a; i <= b; i++){
        if(chh(i) && chk(i)){
            (flag ++) && printf(" ");
            printf("%d", i);
        }
    }
    printf("\n");
    return 0;
}
