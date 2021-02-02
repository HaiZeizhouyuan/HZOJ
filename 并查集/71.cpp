/*************************************************************************
	> File Name: 71.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年01月30日 星期六 20时37分45秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 10000

struct UninSet {
    int fa[MAX_N + 5];
    void init(int n) {
        for (int i = 1; i <= n; i++) fa[i] = i;
    }

    int get(int x) {
        return (fa[x] = (x - fa[x] ?  get(fa[x]): x));    
    }
    void merge(int a, int b) {
        fa[get(a)] = get(b); 
    }
};

UninSet u;

int main() {
    int n, m;
    cin >> n >> m;
    u.init(n);
    for (int i = 0; i < m; i++ ) {
        int a, b, c;
        cin >> a >> b >> c;
        switch(a) {
            case 1:u.merge(b, c); break;
            case 2: cout << (u.get(b) - u.get(c) ? "No" : "Yes") << endl; break;
        } 
    }
 
    return 0;
}
