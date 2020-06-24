/*************************************************************************
	> File Name: 203.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Jun  8 12:27:37 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int h[10][10];
int num[104];
void checkmaxheight(int, int (*h)[10], int);
void init(int, int *num, int, int &stu);
int main (){
    int m, n, k = 0, sum = 0, stu = 0;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> h[i][j];
            sum += h[i][j];
            num[k++] = h[i][j];
        }
    }
    int avarege = round(sum * 1.0/ k);
    checkmaxheight(m, h, n);
    init(k, num, avarege, stu);
    cout << avarege << endl;
    cout << stu << endl;
    return 0;
}

void checkmaxheight(int m, int (*h)[10], int n) {
    for (int i = 0; i < n; i++) {
        int max = h[0][i];
        for (int j = 1; j < m; j++) {
            if (h[j][i] > max) max = h[j][i];
        }
        cout << max << endl;        
    }
    return ;
}

int cmp(int a, int b){
    return a > b;
}

void init(int k, int *num, int avarege, int &stu) {
    sort (num, num + k, cmp);
    for (int i = 0; i < k; i++) {
        if (num[i] >= avarege) stu++; 
        i && cout << " ";
        cout << num[i];
    }
    cout << endl;
}


