/*************************************************************************
	> File Name: 223_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年12月30日 星期三 18时32分34秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 10000
#define define_mid long long mid = (l + r) >> 1

struct tree{
    long long sum, tag;
}tree[MAX_N << 2];

long long arr[MAX_N + 5];

void update(long long ind) {
    tree[ind].sum = tree[ind << 1].sum + tree[ind << 1 | 1].sum;
    return ;
}

void build_tree(long long ind, long long l, long long r) {
    if (l == r) {
        tree[ind].sum = arr[l];
        return ;
    }
    define_mid;
    build_tree(ind << 1, l, mid);
    build_tree(ind << 1 | 1, mid + 1, r);
    update(ind);
    return ;
}

void down(long long ind, long long l, long long r) {
    if (tree[ind].tag) {
        long long val = tree[ind].tag;
        define_mid;
        tree[ind << 1].sum += val * (mid - l + 1);
        tree[ind << 1].tag += val;
        tree[ind << 1 | 1].sum += val * (r - mid);
        tree[ind << 1 | 1].tag += val;
        tree[ind].tag = 0;
    }
    return ;
}

void modify(long long ind, long long l, long long r, long long x, long long y, long long val) {
    if (x <= l && r <= y) {
        tree[ind].sum += val * (r - l + 1);
        tree[ind].tag += val;
        return ;
    }
    down(ind, l, r);
    define_mid;
    if (mid >= x) {
        modify(ind << 1, l, mid, x, y, val);
    }
    if (mid < y) {
        modify(ind << 1 | 1, mid + 1, r, x, y, val);
    }
    update(ind);
    return ;
}

long long query(long long ind, long long l, long long r, long long x, long long y) {
    if (x <= l && r <= y) {
        return tree[ind].sum;
    }

    down(ind, l, r);
    define_mid;
    long long ans = 0;
    if (mid >= x) {
        ans += query(ind << 1, l, mid, x, y);
    }
    if (mid < y) {
        ans += query(ind << 1 | 1, mid + 1, r, x, y);
    }
    return ans;
}

int main() {
    long long n, m, a, b, c, d;
    scanf("%lld%lld", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%lld", arr + i);
    }
    build_tree(1, 1, n);
    for (int i = 0; i < m; i++) {
        scanf("%lld%lld%lld", &a, &b, &c);
        switch(a) {
            case 1: {
                scanf("%lld", &d);
                modify(1, 1, n, b, c, d);
            } break;
            case 2: {
                if (b > c) {
                    printf("0\n");
                    break;
                } 
                printf("%lld\n", query(1, 1, n, b, c));
            } break;
        }
    }
    return 0;
}
