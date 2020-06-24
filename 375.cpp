/*************************************************************************
	> File Name: 375.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Jun 19 11:00:49 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
#define max_n 300
typedef struct student {
    int ch, ma, en, node, sum;
} Student;

Student stu[max_n + 5];

bool cmp(const Student a, const Student b){
    if (a.sum - b.sum) return a.sum > b.sum;
    if (a.ch - b.ch) return a.ch > b.ch;
    else return a.node < b.node;
}

int main (){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].ch >> stu[i].ma >> stu[i].en;
        stu[i].sum = stu[i].ch + stu[i].ma + stu[i].en;
        stu[i].node = i + 1;
    }
    sort (stu, stu + n, cmp);
    for (int i = 0; i < 5; i++) {
        cout << stu[i].node << " " << stu[i].sum << endl;
    }
    return 0;
}
