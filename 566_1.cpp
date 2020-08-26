/*************************************************************************
	> File Name: 566_1.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月24日 星期一 20时38分08秒
 ************************************************************************/

#include<iostream>
#include<map>
using namespace std;

struct user {
    int num;
    string name;
    string web[5005];
};

struct user users[1005];

int n, m, node;
string tmp_name, tmp_web;
int main () {
    map<string, int> ma;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> tmp_name >> tmp_web;
        if (ma[tmp_name] == 0) {
            node += 1;
            ma[tmp_name] = node;
            users[node].name = tmp_name;
            users[node].num = 0;
        }
        int x = ma[tmp_name];
        int sum = ++users[x].num;
        users[x].web[sum] = tmp_web;
    }

    for (int i = 1; i <= n; i++) {
        cout << users[i].name;
        for (int j = 1; j <= users[i].num; j++) {
            cout << " " << users[i].web[j];
        }
        cout << endl;
    }

}
