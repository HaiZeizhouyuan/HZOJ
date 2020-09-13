/*************************************************************************
	> File Name: 33.c
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月13日 星期日 21时37分27秒
 ************************************************************************/

#include<stdio.h>

double m, n, p;

int main() {
    scanf("%lf%lf%lf", &m, &n, &p);
    if (p == 1) printf("%.2lf\n", (m + n) * 1.087 / 2);
    else printf("%.2lf\n", (m * 0.973 + n) / 2);
    return 0;
}
