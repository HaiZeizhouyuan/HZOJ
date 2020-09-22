/*************************************************************************
	> File Name: 386.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月03日 星期四 14时09分43秒
 ************************************************************************/
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define max_n 100000

int man[max_n + 5];
int m, n;
typedef struct Fruit{
    int num, node;
}Fruit;

Fruit fruit[max_n +5];

int binary_search(int num) {
    int left = 0, right = m - 1, mid;
    while(left <= right) {
        mid = (left + right) / 2;
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
        scanf("%d",&fruit[i].num);
        fruit[i].node = i + 1;
    }
    sort(fruit, fruit + m, cmp);
    for (int i = 0; i < n; i++) {
        scanf("%d", &man[i]);
        printf("%d\n", binary_search(man[i]));
    }



    return 0;
}
