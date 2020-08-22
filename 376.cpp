/*************************************************************************
	> File Name: 376.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月20日 星期四 21时18分47秒
 ************************************************************************/

#include<iostream>
#include <queue>
using namespace std;
int m, n, sum = 0;
queue<int> que;

int main() {
    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        int temp, flag = 0;
        cin >> temp;
        for (int j = 0; j < que.size(); j++) {
            if (que.front() == temp) flag = 1;
            que.push(que.front());
            que.pop();
        }
        if (flag == 0) {
            sum += 1;
            if (que.size() == m) que.pop();
            que.push(temp);
        }
    }
    cout << sum << endl;
    return 0;
}
