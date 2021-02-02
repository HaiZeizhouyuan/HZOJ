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
 
class DataStruct{
public:
    DataStruct() {
        sum[0] = 0;
        ans[0] = INT64_MIN;
    }
    void insert(long long x);
    void erase();
    void move_left();
    void move_right();
    long long query(long long k);
private:
    stack<long long> sta1, sta2;
    long long sum[1005];
    long long ans[1005];
};

void DataStruct::insert(long long val) {
    sta1.push(val);
    int ind = sta1.size();
    sum[ind]= val + sum[ind - 1]; 
    ans[ind] = max(ans[ind - 1], sum[ind]);
    return ;
}

void DataStruct::erase() {
    if (sta1.empty()) return ;
    sta1.pop();
    return ;
}

void DataStruct::move_left(){
    if (sta1.empty()) return;
    sta2.push(sta1.top());
    erase();
    return ;
}

void DataStruct::move_right(){
    if (sta2.empty()) return ;
    insert(sta2.top());
    sta2.pop();
    return ;
}

long long DataStruct::query(long long ind) {
    return ans[ind];
}

int main() {
    long long n;
    cin >> n;
    string ope;
    long long  val;
    DataStruct s;
    for (int i = 0; i < n; i++) {
        cin >> ope;
        switch(ope[0]) {
            case 'I': {
                cin >> val;
                s.insert(val);
            } break;
            case 'D': {
                s.erase();
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
