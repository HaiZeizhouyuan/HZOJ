/*************************************************************************
	> File Name: 143.c
	> Author: 
	> Mail: 
	> Created Time: Sat May  9 21:26:21 2020
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int devide(int n){
    if(n % 6 == 0) return 1;
    return 0;
}
int prime(int n){
    int num = 1;
    for(int i = 2; i < n; i++){
        if (n % i == 0) num = 0;
    }
    return num;
}
int chekh(int n){
    int k = n / 100;
    return prime(k);
}
int cheto(int n){
    int a = n % 100;
    double k = sqrt(a);
    if (k == ceil(k))  return 1 ;
    return 0;
}
void check(int a, int b){ 
    int num = 0, flag = 0;;
    for(int i = a; i < b + 1; i++){
        if(devide(i) && chekh(i) && cheto(i)){
            num ++;
            if (flag == 1) printf(" ");
            flag = 1;
            printf("%d", i);
        }
    }
    printf("\n%d\n", num);
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    check(a, b);
    return 0;
}
