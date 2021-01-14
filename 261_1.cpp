/*************************************************************************
	> File Name: 261_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年01月10日 星期日 14时22分26秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <cinttypes>
#include <stack>
using namespace std;
 
class NewStruct{
public:
    NewStruct() {
        sum[0] = 0;
        ans[0] = INT64_MIN;
    }
    void insert(long long x);
    void del();
    void move_left();
    void move_right();
    long long query(long long k);
private:
    stack<long long> s1, s2;
    long long sum[1005];
    long long ans[1005];
};

void NewStruct::insert(long long x) {
    s1.push(x);
    int ind = s1.size();
    sum[ind]= x + sum[ind - 1]; 
    ans[ind] = max(ans[ind - 1], sum[ind]);
    return ;
}

void NewStruct::del() {
    if (s1.empty()) return ;
    s1.pop();
    return ;
}

void NewStruct::move_left(){
    if (s1.empty()) return;
    s2.push(s1.top());
    del();
    return ;
}

void NewStruct::move_right(){
    if (s2.empty()) return ;
    insert(s2.top());
    s2.pop();
    return ;
}

long long NewStruct::query(long long k) {
    return ans[k];
}

int main() {
    long long n;
    cin >> n;
    string op;
    long long  val;
    NewStruct s;
    for (int i = 0; i < n; i++) {
        cin >> op;
        switch(op[0]) {
            case 'I': {
                cin >> val;
                s.insert(val);
            } break;
            case 'D': {
                s.del();
            } break;
            case 'L': {
                s.move_left(); 
            }break;
            case 'R': {
                s.move_right();
            } break;
            case 'Q': {
                cin >> val;
                cout << s.query(val) << endl;
            } break;
        }
    }
 
    return 0;
}
