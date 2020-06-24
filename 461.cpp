/*************************************************************************
	> File Name: 461.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Jun 10 14:15:42 2020
 ************************************************************************/

#include<iostream>
#include<sstream>
using namespace std;


typedef struct student {
    char kind;
    string grade;
} Student;

Student stu[1000];

int strnum(string);
int main () {
    int n, num = 0, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].kind >> stu[i].grade;
        string temp = stu[i].grade;
        if (stu[i].kind == 'C') num += 1;
        else sum += strnum(temp);
    }
    cout << num << " " << sum / (n - num) << endl;
    return 0;
}

int strnum(string s) {
    int num;
    stringstream ss(s);
    ss >> num;
    return num;
}
