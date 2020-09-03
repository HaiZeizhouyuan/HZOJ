/*************************************************************************
	> File Name: 388.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月03日 星期四 14时09分43秒
 ************************************************************************/
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define max_n 100000

long long man[max_n + 5], re[max_n + 5], f[max_n + 5];
int m, n, ans;
long long sum;
typedef struct Fruit{
    long long num;
    int node;
}Fruit;

Fruit fruit[max_n +5];

int binary_search(long long num) {
    int left = 0, right = m - 1, mid;
    while(left <= right) {
        mid = (left + right) >> 1;
       // printf("l: %d, r : %d, mid : %d, fruit : %d\n", left, right, mid, fruit[mid].num);
        if (fruit[mid].num ==  num)  return fruit[mid].node;
        if (fruit[mid].num < num) left = mid + 1;
        else right = mid - 1;
    }
    return 0;
}

bool cmp(Fruit a, Fruit b) {
    return a.num < b.num;
}

int main() {
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++) {
        scanf("%lld",&fruit[i].num);
        fruit[i].node = i + 1;
        f[i] = fruit[i].num;
    }
    sort(fruit, fruit + m, cmp);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &man[i]);
        int tmp =  binary_search(man[i]);
        if (tmp) re[ans++] = tmp;
    }
    sort(re, re + ans);
    for (int i = 0; i < ans; i++) {
        i && printf(" ");
        printf("%lld", f[re[i] -1]);
        sum += f[re[i] - 1];
    }
    printf("\n");
    printf("%lld\n", sum);
    return 0;
}
