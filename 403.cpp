/*************************************************************************
	> File Name: 403.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月16日 星期三 09时00分20秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<unistd.h>
using namespace std;
 
string str_A, str_B;
string tmp_a, tmp_b;
int main() {
    cin >> str_A >> str_B;
    int stp = 0;
    while(cin >> tmp_a >> tmp_b) {
        int pos = 0;
        while((pos = str_A.find(tmp_a, pos)) != string::npos) {
            cout << pos << endl;
            sleep(1);
            if (pos == str_A.npos) break;
            str_A.replace(pos, tmp_a.size(), tmp_b);
            pos += 1;
        }
        cout << str_A << endl;
        if (pos == str_A.npos) continue;
        stp += 1;
        if (str_A.compare(str_B) == 0) {
            cout << stp << endl;
            return 0;
        }
    }
    cout << "NO ANSWER!" << endl;
    return 0;
}
