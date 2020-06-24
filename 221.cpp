/*************************************************************************
	> File Name: 221.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu May 21 16:11:18 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
#define max_n 100000

typedef struct student{
    int node, h, num;
}Stu;

Stu stu[max_n + 5];

int ball[max_n + 5];
bool cmp(Stu a, Stu b) {
    return a.h < b.h;
}

bool cmp1(Stu a, Stu b) {
    return a.node < b.node;
}

void init(Stu *stu, int *ball, int n, int m) {
    int ssum = 0;
    for (int i = 0; i < n && m - ssum; i++) {
        while (stu[i].h >= ball[ssum] && ssum < m) {
            stu[i].num += 1;
            ssum += 1;
        }
    }
    return ;
}
int main (){
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].h;
        stu[i].node = i;
        stu[i].num = 0;
    }
    sort(stu, stu + n, cmp);
    for (int i = 0; i < m; i++) {
        cin >> ball[i];
    }
    sort(ball, ball + m);
    init(stu, ball, n, m);
    sort(stu, stu + n, cmp1);
    for (int i = 0; i < n; i++) {
        cout << stu[i].num << endl;
    }

    return 0;
}
