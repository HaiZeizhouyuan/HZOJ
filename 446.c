/*************************************************************************
	> File Name: 446.c
	> Author: 
	> Mail: 
	> Created Time: Thu May  7 01:19:09 2020
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main(){
    int n, a, m = 0;
    scanf("%d", &n);
    for (int i = 0; i < ceil(1.0 * n / 2); i++) {
        for (int j = 0; j < ceil(1.0 * n / 2 ); j++) {
            if (j > m ) {
                printf("%d ", m + 1);
            } else {
                printf("%d ", j + 1);
            }
        }
        for (int j =  n / 2 - 1; j > -1; j--) {
            if (j > m - 1 ) {
                printf("%d", m + 1);
            } else {
                printf("%d", j + 1);
            }
            j != 0 && printf(" ");
        }
        m++;
        printf("\n");
    }
    if (n % 2 == 0) {
         m = m - 1;
    } else {
        m = m - 2;
    }
    for (int i = n / 2; i > 0; i--) {
        for (int j = 0; j < ceil(1.0 * n / 2 ); j++) {
            if (j > m ) {
                printf("%d ", m + 1);
            } else {
                printf("%d ", j + 1);
            }
        }
        for (int j =  n / 2 - 1; j > -1; j--) {
            if (j > m - 1 ) {
                printf("%d", m + 1);
            } else {
                printf("%d", j + 1);
            }
            j != 0 && printf(" ");
        }
        m--;
        printf("\n");
    }

    return 0;
}
