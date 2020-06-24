/*************************************************************************
	> File Name: 440.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May 29 18:38:43 2020
 ************************************************************************/

#include <stdio.h>

inline int check(int n, int x){
    int tep = n, num = 0;
    while (tep) {
        if (tep % 10 == x) num++;
        tep /= 10;
    }
    return num;
}

inline int cal(int n, int x) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += check(i, x);
    }
    return sum;
}

int main(){
    int n, x;
    scanf("%d%d", &n, &x);
    printf("%d\n", cal(n, x));
    return 0;
}
