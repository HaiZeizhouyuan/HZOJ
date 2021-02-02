/*************************************************************************
	> File Name: 263.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年01月14日 星期四 14时36分09秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
int a[30], s[30], top;
bool is_valid(int *a, int n) {
    int j = 0;
    top = -1;
    for(int i = 0; i < n; i++) {
        while(j < a[i]) {
            s[++top] = (++j);
        }
        if (top == -1 || s[top] - a[i]) return false;
        --top;
    }
    return true;
}


nt main() {
    int n, ans = 20;
    cin >> n;
    for (int i = 0; i < n; i++) a[i] = i + 1;
    do {
        if (!is_valid(a, n)) continue;
        for (int i = 0; i < n; i++) {
            cout << a[i];
        }
        cout << endl;
        ans--;
    } while(ans && next_permutation(a, a + n));
 
    return 0;
}
