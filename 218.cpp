/*************************************************************************
	> File Name: 218.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed May 20 16:48:48 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

struct student {
    int h, num;
};
bool cmp(student a, student b){
    if (a.h ==  b.h) {
        return a.num < b.num;
    }
    return a.h < b.h;

}
int main(){
    int n;
    cin >> n;
    student stu[100005];
    for (int i = 0; i < n; i++) {
        cin >> stu[i].h;
        stu[i].num = i + 1;
    }
    sort(stu, stu + n, cmp);
    for (int i = 0; i < n; i++) {
        if (i) {
            cout << " ";
        }
        cout << stu[i].num;
    }
    cout << endl;
    return 0;
}
