/*************************************************************************
	> File Name: 483.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月01日 星期二 17时07分33秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;

string email_address;
int sum;
string re[200];

int main() {
	cin >> email_address;
    re[sum++] = email_address;
    int ex_loc = email_address.find("nospam");
    while(ex_loc != string::npos) {
        re[sum] = email_address;
        re[sum].replace(ex_loc, 6, "");
        sum++;
        ex_loc = email_address.find("nospam", ex_loc + 1);
    }
    for (int i = sum - 1; i >= 0; i--) {
        ex_loc = re[i].find("at");
        while(ex_loc != string::npos){
            re[sum] = re[i];
            re[sum].replace(ex_loc, 2, "@");
            sum++;
            ex_loc = re[i].find("at", ex_loc + 1);
        }
    }
    sort(re, re + sum);
    for (int i = 0; i < sum; i++) {
        if (i  > 0 && re[i - 1] == re[i]) continue;
        if (re[i][0] == '.' || re[i][re[i].size() - 1] == '.') continue;
        int loc = re[i].find("@");
        if (loc == re[i].npos) continue;
        if (loc == 0 || loc == re[i].size() - 1) continue;
        if (re[i][loc - 1] == '.' || re[i][loc + 1] == '.') continue;
        cout << re[i] << endl;
    }
}
