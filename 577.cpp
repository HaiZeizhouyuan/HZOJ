/*************************************************************************
	> File Name: 577.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月25日 星期二 20时17分49秒
 ************************************************************************/

#include<iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

string tmp;
string max_name;
int max_num;

int main() {
    map<string, int> ma;
    while (cin >> tmp) {
        for (int i = 0; i < tmp.size(); i++) {
            if (tmp[i] < 'a') {
                tmp[i] += 'a' - 'A';
            }
        }
        ma[tmp] += 1;
        int ans = ma[tmp]; 
        if (ans > max_num) {
            max_name = tmp;
            max_num = ans;
        }
        if (ans == max_num && tmp < max_name) max_name = tmp;
    }

    cout << max_name << " " << max_num << endl;
    
    return 0;
}
