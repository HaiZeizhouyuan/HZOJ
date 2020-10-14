/*************************************************************************
	> File Name: 402.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年10月13日 星期二 18时05分22秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
using namespace std;
 
struct node{
    int now, step;
};

int n, a, b, num[205], check[205];

int main() {
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
    }
    queue<node> que;
    que.push((node){a, 0});
    check[a] = 1;
    while(!que.empty()) {
        node tmp = que.front();
        que.pop();
        if (tmp.now == b)  {
            cout  << tmp.step << endl;
            return 0;
        }
        int up = tmp.now + num[tmp.now];
        int down = tmp.now - num[tmp.now];
        if (up <= n && check[up] == 0) {
            check[up] = 1;
            que.push((node){up, tmp.step + 1});
        }
        if (down > 0 && check[down] == 0) {
            check[down] = 1;
            que.push((node){down, tmp.step + 1});
        }
    }
    cout << -1 << endl;
    return 0;
}
