/*************************************************************************
	> File Name: 539.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月22日 星期六 16时14分26秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>
using namespace std;

int opt_num[4], re_cnt, num_cnt, num_check[4], temp_num[4];
char opt[7] = {'+', '-', '*', '/', '&', '|', '^'};
char my_opt[3], my_opt_str[4],t[4];
string re[10000];
char temp;

void select_opt();
void sort_num(int left);
void opt_all();
int func(int a, int b, char op);
void init();
int main () {
    for (int i = 0; i < 4; i++) {
        cin >> temp;
        switch(temp) {
            case 'A' : opt_num[i] = 1; break;
            case 'T': opt_num[i] = 10; break;
            case 'J': opt_num[i] = 11; break;
            case 'Q': opt_num[i] = 12; break;
            case 'K': opt_num[i] = 13; break;
            default : opt_num[i] = temp - '0';
        }
    }
    sort_num(4);
    sort(re, re + re_cnt);
    cout << re[0] << endl;
    return 0;
}

void sort_num(int left) {
    if (left == 0) {
        select_opt();
        return ;
    }

    for (int i = 0; i < 4; i++) {
        if (num_check[i] == 0) {
            temp_num[num_cnt] = opt_num[i];
            num_cnt++;
            num_check[i] = 1;
            sort_num(left - 1);
            num_cnt--;
            num_check[i] = 0;
        }
    }
}

void select_opt() {
    for (int i = 0; i < 7; i++) {
        my_opt[0] = opt[i];
        for (int j = 0; j < 7; j++) {
            my_opt[1] = opt[j];
            for (int k = 0; k < 7; k++) {
                my_opt[2] = opt[k];
                opt_all();
            }
        }
    }
}

void init () {
    for (int i = 0; i < 4; i++) {
        switch(temp_num[i]) {
            case 1 : my_opt_str[i] = 'A'; break;
            case 10 : my_opt_str[i] = 'T'; break;
            case 11 : my_opt_str[i] = 'J'; break;
            case 12 : my_opt_str[i] = 'Q'; break;
            case 13 : my_opt_str[i] = 'K'; break;
            default : my_opt_str[i] = temp_num[i] + '0';

        }
    }
}

void opt_all() {
    char t[50];
    //(((a, b), c), d)
    if (func(func(func(temp_num[0], temp_num[1], my_opt[0]), temp_num[2], my_opt[1]), temp_num[3], my_opt[2]) == 24) {
        init ();
        sprintf(t, "(((%c%c%c)%c%c)%c%c)", my_opt_str[0], my_opt[0], my_opt_str[1], my_opt[1], my_opt_str[2], my_opt[2], my_opt_str[3]);
        re[re_cnt++] = t;
    }
    //((a, (b, c)), d)
    if (func(func(temp_num[0], func(temp_num[1], temp_num[2], my_opt[0]), my_opt[1]), temp_num[3], my_opt[2]) == 24) {
        init();
        sprintf(t, "(%c%c(%c%c%c))%c%c)", my_opt_str[0], my_opt[1], my_opt_str[1], my_opt[0], my_opt_str[2], my_opt[2], my_opt_str[3]);
        re[re_cnt++] = t;
    }
    //(a, ((b c),d)))
    if  (func(temp_num[0], func(func(temp_num[1], temp_num[2], my_opt[1]), temp_num[3], my_opt[2]), my_opt[0]) == 24) {
		init();
   		sprintf(t, "(%c%c((%c%c%c)%c%c))", my_opt_str[0], my_opt[0], my_opt_str[1], my_opt[1], my_opt_str[2], my_opt[2], my_opt_str[3]);
   		re[re_cnt++] = t;
    }
    //(a, (b, (c, d)))
    if (func(temp_num[0], func(temp_num[1], func(temp_num[2], temp_num[3], my_opt[0]), my_opt[1]), my_opt[2]) == 24) {
        init();
        sprintf(t, "(%c%c(%c%c(%c%c%c)))", my_opt_str[0], my_opt[2], my_opt_str[1], my_opt[1], my_opt_str[2], my_opt[0], my_opt_str[3]);
        re[re_cnt++] = t;
    }
    //((a, b), (c, d))
    if (func(func(temp_num[0], temp_num[1], my_opt[0]), func(temp_num[2], temp_num[3], my_opt[1]), my_opt[2]) == 24) {
        init();
        sprintf(t, "((%c%c%c)%c(%c%c%c))", my_opt_str[0], my_opt[0], my_opt_str[1], my_opt[2], my_opt_str[2], my_opt[2], my_opt_str[3]);
        re[re_cnt++] = t;
    }
}



int func(int a, int b, char op) {
    if (b == 0 && op == '/') return -99999999;
    switch(op) {
        case '+' : return a + b;
        case '-' : return a - b;
        case '*' : return a * b;
        case '&' : return a & b;
        case '|' : return a | b;
        case '^' : return a ^ b;
    }
    if (a % b == 0) return a / b;
    return -99999999;
}

