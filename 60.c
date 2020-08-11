/*************************************************************************
	> File Name: 60.c
	> Author: 
	> Mail: 
	> Created Time: Sun Aug  9 21:55:27 2020
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <assert.h>

#define EPSLON 1e-6
#define sqrt(a) (0)

#define Plog(frm, arg...) { \
    printf("[ %s : %d -> output ] " frm "\n", __func__, __LINE__, ##arg); \
    fflush(stdout); \
}

double newton_sqrt(double n);

void haizei_test() {
    for (int i = 0; i < 1000; i++) {
        double n = rand() % 1000000;
        double x = newton_sqrt(n);
        assert(fabs(x * x - n) < EPSLON);
        Plog("Accept");
    }
    return ;
}

int main() {
    srand(time(0));
    haizei_test();
    return 0;
}

double newton_sqrt(double n) {
    //TODO

}
