/*************************************************************************
	> File Name: 287.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月22日 星期六 20时27分45秒
 ************************************************************************/

#include<iostream>
#include <queue>
using namespace std;
int n, temp, f, sum;

int main () {
    priority_queue<int, vector<int>, greater<int> > que;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        que.push(temp);
    }

    while (que.size() - 1) {
        f = que.top();
        que.pop();
        f += que.top();
        que.pop();
        sum += f;
        que.push(f);
    }
    cout << sum << endl;
    return 0;
}
