/*************************************************************************
	> File Name: 382.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月20日 星期四 19时58分17秒
 ************************************************************************/

#include<iostream>
#include <queue>
using namespace std;

int n, m;
queue<int> que;

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        que.push(i);
    }
    while(n > 1) {
        for (int i = 0; i < m - 1; i++) {
            int f = que.front();
            que.pop();
            que.push(f);
        }
        que.pop();
        n--;
    }
    cout << que.front() << endl;
    return 0;
}

