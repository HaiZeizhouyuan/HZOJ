/*************************************************************************
	> File Name: 566.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月24日 星期一 18时58分26秒
 ************************************************************************/

#include<iostream>
#include<map>
using namespace std;

int n, m, ans;
string num[1005][5005];
string user[1005];
string name, web;
int sum[5005];
int main () {
    map<string, int> ma;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> name >> web;
        if (ma[name] == 0) {
            ans += 1;
            ma[name] = ans;
            user[ans] = name;
        }
        int x = ma[name];
        num[x][sum[x]] = web;
        sum[x] += 1;
    }
    for (int i = 1; i <= n; i++) {
        cout << user[i];
        int x = ma[user[i]];
        for (int j = 0; j < sum[x]; j++) {
            cout << " " << num[i][j];
        }
        cout << endl;
    }
    return 0;
}
