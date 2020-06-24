/*************************************************************************
	> File Name: 78.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat May 23 16:19:06 2020
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define max_n 101

char str[max_n + 5];
int arr[max_n + 5] = {1, 0};

int main(){
    for (int i = 0; i < 2; i++) {
        scanf("%s", str);
        int len = strlen(str);
        if (len > arr[0]) arr[0] = len;
        for (int i = 0; str[i]; i++) {
            arr[len - i] += (str[i] - '0');
        }
        for (int i = 1; i <= arr[0]; i++) {
            if(arr[i] < 10) continue;
            arr[i + 1] += arr[i] / 10;
            arr[i] %= 10;
            arr[0] += (i == arr[0]);
        }
    }
    for (int i = arr[0]; i > 0; i--){
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}

