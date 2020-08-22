/*************************************************************************
	> File Name: 384.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月20日 星期四 20时16分26秒
 ************************************************************************/

#include<iostream>
#include <queue>
using namespace std;
int n, x, t;
int num[1005];
queue<int> que;

int func(int num) {
    if (num % 7 == 0) return 1;
    while (num) {
        int temp = num % 10;
        if (temp == 7) return 1;
        num /= 10;
    }
    return 0;
}

int main () {
    cin >> n >> x >> t;
    for (int i = 1; i <= n; i++) {
        que.push(((x - 1) % n) + 1);     
        x++;
    }

    while (n > 1) {
        for (int i = 1; i <= n; i++ ) {
            int f = que.front();
            que.pop();
            if (!func(t)) que.push(f);
            else n--;
            t++;
        }
    }
    cout << que.front() << endl;
    return 0;
}
