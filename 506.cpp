/*************************************************************************
	> File Name: 506.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Jun 10 15:21:22 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

typedef struct student{
    int node, time;
} Student;

bool cmp(Student a, Student b){
    return a.time < b.time;
}

int main () {
    int n;
    cin >> n;
    Student stu[35];
    for (int i = 0; i < n; i++) {
        cin >> stu[i].time;
        stu[i].node = i + 1;
    }
    sort (stu, stu + n, cmp);
    double stime = 0, alltime = 0;
    for (int i = 0; i < n; i++) {
        i && cout << " ";
        cout << stu[i].node;
        alltime += stime;
        stime += stu[i].time;
    }
    cout << endl;
    printf("%.2lf\n", alltime / n);



    return 0;
}
