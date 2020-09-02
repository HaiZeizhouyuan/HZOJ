/*************************************************************************
	> File Name: 47.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月01日 星期二 20时41分17秒
 ************************************************************************/

#include<iostream>
using namespace std;
 
int v, n, sum_w, max_w;
int thing_v[105],thing_w[105];

int flag = 0;
void func(int q, int v, int sum_w) {
    for (int i = q; i < n; i++) {
cout << "v : " << thing_v[i] << ", w: " << thing_w[i] << ";";
        v -= thing_v[i];
        q += 1;
        if (v < 0) {
            v += thing_v[i];
            max_w = (max_w, sum_w);
            cout << endl;
            return ;
        }
        sum_w += thing_w[i];
        func(q, v, sum_w);
        q -= 1;
    }
}
int main() {
    cin >> v >> n;
    for (int i = 0; i < n; i++) {
        cin >> thing_v[i] >> thing_w[i];
    }
    func(0, v, 0);
    cout << max_w << endl;
    return 0;
}
