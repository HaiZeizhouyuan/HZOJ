/*************************************************************************
	> File Name: 374.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月02日 星期三 17时02分35秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
int x, y, z;
int check[15] = {0};


void init(int m) {
    int tmp = m;
    while(tmp) {
        check[tmp % 10] = 1;
        tmp /= 10;
    }
}

int func(int num) {
    memset(check, 0, sizeof(check));
    init(x * num);
    init(y * num);
    init(z * num);
    for (int i = 1; i <= 9; i++) {
        if (check[i] == 0) return 0;
    }
    return 1;
}


int main() {
    int flag = 0;
    scanf("%d%d%d", &x, &y, &z);
    for (int i = 11; i < 999; i++) {
        if (i * x < 100 || i * x > 999 || i * y < 100 || i * y > 999 || i * z < 100 || i * z > 999) continue;
        int temp = func(i);
        flag += temp;
        if (temp) printf("%d %d %d\n", x * i, y * i,  z * i);
    }
    !flag && printf("No\n");
    return 0;
}
