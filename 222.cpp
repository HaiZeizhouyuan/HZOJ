/*************************************************************************
	> File Name: 222.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年12月29日 星期二 20时10分43秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
#include<cstdint>
#include<climits>
using namespace std;
#define MAX_N 10000

typedef struct tree{
    int max_num;
}Tree;

vector<int> arr;
vector<Tree> tree(MAX_N << 2);
void update(int ind) {
    tree[ind].max_num = max(tree[ind << 1].max_num, tree[ind << 1 | 1].max_num);
    return ;
}

void build_tree(int ind, int l, int r) {
    if (l == r) {
        tree[ind].max_num = arr[l];
        return;
    };
    int mid = (l + r) >> 1;
    build_tree(ind * 2, l, mid);
    build_tree(ind * 2 + 1, mid + 1, r);
    update(ind);
    return ;
}

void modify(int ind, int l, int r, int k, int val) {
    if (l == r) {
        tree[ind].max_num = val;
        return ;
    }
    int mid = (l + r) >> 1;
    if (k <= mid) {
        modify(ind << 1, l, mid,  k, val);
    } else {
        modify(ind << 1 | 1, mid + 1, r, k, val);
    }
    update(ind);
    return ;
}

int query(int ind, int l, int r, int x, int y) {
    if (l >= x && r <= y) {
        return tree[ind].max_num;
    }
    int ans = INT_MIN;
    int mid = (l + r) >> 1;
    if (mid >= x) {
        ans = max(ans, query(ind << 1,l, mid, x, y));
    }
    if (mid  + 1 <= y) {
        ans = max(ans, query(ind << 1 | 1, mid + 1, r, x, y));
    }
    return ans;
}

int main() {
    int n, m, a, b, c;
    cin >> n >> m;
    arr.emplace_back(0);
    for (int i = 1; i <= n; i++) {
        int temp;
        cin >> temp;
        arr.emplace_back(temp);
        //scanf("%d", arr + i);
    }

    build_tree(1, 1, n);
    
    for (int i = 0; i < m; i++) {
        scanf("%d%d%d", &a, &b, &c);
        switch(a) {
            case 1:modify(1,1, n, b, c); break;
            case 2:{
                if (b > c) {
                    cout << "-2147483648" << endl;
                    break;
                }
                printf("%d\n", query(1, 1, n, b, c));
            } break;
        }
    }
 
    return 0;
}
