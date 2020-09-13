/*************************************************************************
	> File Name: 585.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月13日 星期日 09时56分19秒
 ************************************************************************/

#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;

int n;
struct Stu{
    int cla, sco;
} stu[205];

bool cmp(struct Stu a, struct Stu b) {
    if (a.sco == b.sco) return a.cla < b.cla;
    return a.sco > b.sco;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].sco >> stu[i].cla;
    }
    sort(stu, stu + n, cmp);

    /*cout << endl;
    for (int i = 0; i < n; i++) {
        cout << stu[i].sco << " " << stu[i].cla << endl;
    }
    cout << endl;*/

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cout << 0 << endl;
        } else {
            int sum = 0;
            for (int j = 0; j < i; j++) {
                if (stu[j].cla < stu[i].cla) sum += 1;
            }
            cout << sum << endl;
        }
    }
    return 0;
}

