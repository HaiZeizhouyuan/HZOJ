/*************************************************************************
	> File Name: 244.c
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月15日 星期二 11时28分37秒
 ************************************************************************/
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

#define max_n 500
int c, n;
struct Node {
    int x, y;
} node[max_n + 5];

bool cmp(const Node a, const Node b){
    if (a.x - b.x) return a.x < b.x;
    return a.y < b.y;
}

int func(int mid) {
    int j = 0;
    for (int i = 0; i < n; i++) {

    }
}

int search(int l, int r) {
    while(l < r) {
        int mid = (l + r) >> 1;
        if (func(mid)) r = mid;
        else l = mid + 1;
    }
    return l;
}

int main() {
    scanf("%d%d", &c, &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &node[i].x, &node[i].y);
    }
    sort(node, node + n, cmp);
    printf("%d\n", search(0, 10000));
    return 0;
}
