/*************************************************************************
	> File Name: stl_sta_que_test.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月18日 星期二 16时28分44秒
 ************************************************************************/

#include<iostream>
#include<stack>
#include <queue>
using namespace std;

struct node {
    int x, y;
};

int main () {
    stack<int> sta;
    sta.push(7);
    for (int i = 1; i < 5; i++) {
        sta.push(i);
    }
    cout << sta.size() << endl;
    cout << sta.top() << endl;
    sta.pop();
    while (!sta.empty() == 0) {
        cout << sta.top() << endl;
        sta.pop();
    } 

    queue<node> que;
    node a;
    a.x = 1;
    a.y = 2;
    que.push(a);
    /*for (int i = 1;i < 5; i++) {
        que.push(i);
    }*/
    //cout << que.size() << endl;
    cout << que.front().x << endl;
    cout << que.front().y << endl;
    node t = que.front();
    cout << t.x << " " << t.y << endl;
    que.push((node){3, 4});
    que.pop();
    /*while (!que.empty() == 0) {
        cout << que.front() << endl;
        que.pop();
    }*/
}
