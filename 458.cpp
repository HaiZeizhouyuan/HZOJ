/*************************************************************************
	> File Name: 458.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Jun  8 17:26:22 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

typedef struct student{
    string name, sex;
    int year, month, age;
} Student;

int cmp(Student a, Student b){
    return a.age > b.age;
}

int main () {
    int n;
    cin >> n;
    Student stu[105];
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name >> stu[i].sex >> stu[i].year >> stu[i].month;
        stu[i].age = stu[i].year * 365 + stu[i].month * 30;
    }
    sort(stu, stu + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << stu[i].name << " ";
        cout << stu[i].sex << " ";
        cout << stu[i].year << " ";
        cout << stu[i].month << endl;
    }
    return 0;
}
