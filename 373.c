/*************************************************************************
	> File Name: 373.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月02日 星期三 11时37分21秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#define max_n 100000

typedef struct Node{
    int min_f_x, max_f_x, min_f_y, max_f_y;
}Node;

Node node[10005];

int main() {
    int n, a, b, l_x, l_y;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d%d%d%d", &a, &b, &l_x, &l_y);
        node[i].min_f_x = a;
        node[i].min_f_y = b;
        node[i].max_f_x = a + l_x;
        node[i].max_f_y = b + l_y;
    }

    int x, y, flag = -1;
    scanf("%d%d", &x, &y);
    for (int i = 1; i <= n; i++) {
        if (x >= node[i].min_f_x && x <= node[i].max_f_x && y >= node[i].min_f_y && y <= node[i].max_f_y) flag = i;
    }

    printf("%d\n", flag);
    return 0;
}
