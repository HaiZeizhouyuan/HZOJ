/*************************************************************************
	> File Name: 207.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun Jun  7 20:58:05 2020
 ************************************************************************/

#include<iostream>
using namespace std;

typedef struct student {
    string name;
    int num[4], score;
} Student;

int main(){
    int n, maxscore = 0, max = 0, min = 100; 
    string firstname;
    cin >> n;
    Student stu[35];
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name;
        stu[i].score = 0;
        for (int j = 0; j < 4; j++) {
            int temp;
            cin >> temp; 
            stu[i].num[j] = temp;
            if (temp > max) max = temp;
            if (temp < min) min = temp;
            stu[i].score += temp;
            if (stu[i].score > maxscore) {
                maxscore = stu[i].score;
                firstname = stu[i].name;
            }

        }
    }
    for (int i = 0; i < n; i++) {
        cout << stu[i].score << endl;
    }
    cout << firstname << endl;
    cout << max << " " << min << endl;
    return 0;
}


