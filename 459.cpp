/*************************************************************************
	> File Name: 459.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Jun 10 11:47:21 2020
 ************************************************************************/

#include<iostream>
using namespace std;

typedef struct student{
    string name, sex;
    double age, weight;
}Student;

int main() {
    Student stu;
    cin >> stu.name >> stu.sex >> stu.age >> stu.weight;
    cout << stu.name << " ";
    cout << stu.sex << " ";
    cout << stu.age << " ";
    cout << stu.weight << endl;
    return 0;
}
