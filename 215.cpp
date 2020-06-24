/*************************************************************************
	> File Name: 215.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue May 19 10:10:57 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

struct student{
    string name;
    int score;
};

bool cmp (student a, student b) {
    return a.score > b.score;
}
int main() {
    int n, num;
    cin >> n;
    student stu[n + 5];
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name;
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            cin >> num;
            sum += num;
        }
        stu[i].score = sum;
    }
    sort(stu, stu + n, cmp);
    for (int i = 0; i < 3; i++) {
        cout << stu[i].name << endl;
    }
  
    return 0;
}
