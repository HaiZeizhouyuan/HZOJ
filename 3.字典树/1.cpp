/*************************************************************************
	> File Name: 1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年03月01日 星期一 20时14分49秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

const int BASE = 26;

typedef struct Node{
    int flag;
    struct Node *next[BASE];
}Node;

typedef struct DAnode {
    int base, check;
}DANode;

Node *getNewNode() {
    Node *p = (Node *)malloc(sizeof(Node));
    p->flag = 1;
    memset(p->next, 0, sizeof(p->next));
    return p;
}

inline int code(char c) {
    return c - 'a';
}

int insert(Node *root, const char *str) {
    int cnt = 0;
    Node *p = root;
    for (int i = 0; str[i]; i++) {
        int ind = code(str[i]);
        if (p->next[ind] == NULL) {
            cnt += 1;
            p->next[ind] = getNewNode();
        }
        p = p->next[ind];
    }
    p->flag = 1;
    return cnt;
}


void clear_trie(Node *root) {
    if (root == NULL) return ;
    for (int i = 0; i < BASE; i++) {
        clear_trie(root->next[i]);
    }
    free(root);
    return ;
}

int get_base_value(Node *root, DANode *tree, int ind) {
    int base = 1, flag;
    do {
        base += 1;
        flag = 1;
        for (int i = 0; i < BASE && flag; i++) {
            if (root->next[i] == NULL) continue;
            if (tree[base + i].check) flag = 0;
        }
    } while(flag == 0);
    return base;
}

int transform_double_array_trie(Node *root, DANode *tree, int ind) {
    if (root == NULL) return ind;
    if (root->flag) tree[ind].check = -tree[ind].check;
    int base = get_base_value(root, tree, ind);
    tree[ind].base = base;
    for (int i = 0; i < BASE; i++) {
        if (root->next[i] == NULL) continue;
        tree[base + i].check = ind;
    }
    int max_ind = ind;
    for (int i = 0; i < BASE; i++) {
        int a = transform_double_array_trie(root->next[i], tree, base + i);
        max_ind = max(max_ind, a);
    }
    return max_ind;
}

int main() {
    int n, cnt = 0;
    char str[1000];
    scanf("%d", &n);
    Node *root = getNewNode();
    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        cnt += insert(root, str);
    }
    DANode *tree = (DAnode *)malloc(sizeof(DAnode) * (cnt * BASE));
    int max_ind = transform_double_array_trie(root, tree, 1);//根节点的下标为1.cpp
    free(tree);
    clear_trie(root);
    return 0;
}
