/*************************************************************************
	> File Name: 569.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月25日 星期二 15时28分50秒
 ************************************************************************/

#include<iostream>
#include<stack>
#include<cstdio>
using namespace std;

struct Result{
    int v;
    double m;
};

int opt_num;
int add_v, sum_v;
double add_c, sum_c, sum_m, add_m;
char opt;

int main() {
    stack<Result> sta;
    cin >> sum_v >> sum_c;
    cin >> opt_num;
    sum_m = sum_v * sum_c / 100;

    for (int i = 0; i < opt_num; i++) {
        cin >> opt;
        if (opt == 'P') {
            cin >> add_v >> add_c;
            add_m = add_v * add_c / 100;
            sum_v += add_v;
            sum_m += add_m;
            sta.push((Result){add_v, add_m});
        } 
        if (opt == 'Z') {
            if (!sta.empty()) {
                sum_v -= sta.top().v;
                sum_m -= sta.top().m;
                sta.pop();
            }
        }
        printf("%d %.5lf\n", sum_v, sum_m / sum_v * 100);
    }
    return 0;
}
