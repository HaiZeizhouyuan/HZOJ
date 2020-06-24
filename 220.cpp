/*************************************************************************
	> File Name: 220.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed May 20 18:54:18 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
#define max_n 100

struct student {
    string name;
    int ch, ma, en, sc, sum;
};

student stu[max_n + 5];
int cmp1(student a, student b ){
    if (a. ch == b. ch) {
        return a.name < b.name;
    }
    return a.ch > b.ch;
}

int cmp2(student a, student b ){
    if (a. ma == b. ma) {
        return a.name < b.name;
    }
    return a.ma > b.ma;
}

int cmp3(student a, student b ){
    if (a.en == b. en) {
        return a.name < b.name;
    }
    return a.en > b.en;
}

int cmp4(student a, student b ){
    if (a.sc == b. sc) {
        return a.name < b.name;
    }
    return a.sc > b.sc;
}

int cmp5(student a, student b ){
    if (a.sum == b.sum) {
        return a.name < b.name;
    }
    return a.sum > b.sum;
}


void com(int n, int (*fun)(student , student)){
    sort(stu, stu + n, fun);
    for (int i = 0; i < 4; i++) {
        if (i){
            cout << " ";
        }
        cout << stu[i].name;
    }
    cout << endl;
}

int main () {
    int n, score1, sumsco;
    cin >> n;
    int score[405];
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name;
        cin >> stu[i].ch;
        cin >> stu[i].ma;
        cin >> stu[i].en;
        cin >> stu[i].sc;
        stu[i].sum = stu[i].ch + stu[i].ma + stu[i].en + stu[i].sc;
    }

    com(n, cmp1);
    com(n, cmp2);
    com(n, cmp3);
    com(n, cmp4);
    com(n, cmp5);
    return 0;
}
