/*************************************************************************
	> File Name: 72.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年01月30日 星期六 21时15分31秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 10000

struct UnionSet {
    int fa[MAX_N + 5], val[MAX_N + 5];
    void init(int n) {
        for (int i = 1; i <= n; i++) fa[i] = i;
    }

    int get(int x) {
        if (x == fa[x]) return x;
        int root = get(fa[x]);
        val[x] += val[fa[x]];
        val[x] %= 3;
        return fa[x] = root;
    }
    
    void merge(int a, int b, int c) {
        int aa = get(a), bb = get(b);
        if (aa == bb) return ;
        fa[aa] = bb;
        val[aa] = (c + val[b] - val[a] + 3) % 3; 
        return ;
    }
};

UnionSet u;

void read(int &n, int &m) {
    cin >> n >> m;
    return ;
}

int main() {
    int n, m;
    read(n, m);
    u.init(n);
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        switch(a) {
            case 1: u.merge(b, c, 2); break;
            case 2: {
                if (u.get(b) != u.get(c)) {
                    cout << "Unknown" << endl;
                } else {
                    switch((u.val[b] - u.val[c] + 3) % 3) {
                        case 0: cout << "Tie" << endl; break;
                        case 1: cout << "Loss" << endl; break;
                        case 2: cout << "Win" << endl; break;
                    } 
                }
            } break;
        }
    }
    return 0;
}
