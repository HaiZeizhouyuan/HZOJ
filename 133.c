/*************************************************************************
	> File Name: 133.c
	> Author: 
	> Mail: 
	> Created Time: Sat May  2 22:07:48 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = i; j <=n; j++){
            int sum =i * j;
            if(j < n){
                printf("%d*%d=%d\t", i, j, sum);
            }else{
                printf("%d*%d=%d\n", i, j, sum);


            }
        }
    }
    return 0;
}
