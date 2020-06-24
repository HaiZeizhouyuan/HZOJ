/*************************************************************************
	> File Name: 175.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May 29 01:33:26 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 30

int score[max_n + 5];

int main(){
    int n, y = 0, l = 0, z = 0, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> score[i];
        if (score[i] >= 90 && score[i] <= 100) y++;
        if (score[i] >= 80 && score[i] <= 89) l++;
        if (score[i] >= 60 && score[i] <= 79) z++;
        if (score[i] < 60) c++;
    }
    cout << "You" << " " << y << endl;
    cout << "Liang" << " " << l << endl;
    cout << "Zhong" << " " << z << endl;
    cout << "Cha" << " " << c << endl;
    return 0;
}
