/*************************************************************************
	> File Name: 202.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Jun 15 14:03:16 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
#define max_n 1000

typedef struct student{
    int node, num;
} Stu; 

Stu stu[max_n  + 5];

int cmp (Stu a, Stu b) {
    if (a.num == b.num) return a.node < b.node;
    else return a.num < b.num;
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].num;
        stu[i].node = i + 1;
    }
    sort(stu, stu + n, cmp);
    for (int i = 0; i < n; i++) {
        i && cout << " ";
        cout << stu[i].node;
    }
    cout << endl;
    return 0;
}
