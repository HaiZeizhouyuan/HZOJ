/*************************************************************************
	> File Name: 282.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年01月21日 星期四 21时03分09秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 100000
#define BASE 31

struct node {
    node *next[2];
} tree[MAX_N * BASE+ 5];

int cnt = 0;

node *getNewNode () {
    return &tree[cnt++];
}

void insert(node *root, int x) {
    for (int i = 30; i >= 0; i--) {
        int ind = !!(x & (1 << i));
        if (root->next[ind] == NULL) root->next[ind] = getNewNode();
        root = root->next[ind];
    }
    return ;
}

int query(node *root, int x) {
    int ans = 0;
    for (int i = 30; i >= 0; i--) {
        int ind = !(x & (1 << i));//向相反的位置走
        if (root->next[ind]) {
            ans |= (1 << i);
            root = root->next[ind];
        } else {
            root = root->next[!ind];
        }
    }
    return ans;
}

int n;
int val[MAX_N + 5];

int main() {
    cin >> n;
    int ans = 0, a;
    node *root = getNewNode();
    cin >> a;
    insert(root, a);
    while (n--) {
        cin >> a;
        ans = max(query(root, a), ans);
        insert(root, a);
    }
    cout << ans << endl;
 
    return 0;
}
