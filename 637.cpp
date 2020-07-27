/*************************************************************************
	> File Name: 637.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Jul 24 21:49:24 2020
 ************************************************************************/

#include <stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

typedef struct node {
    char ch;
    int num, flag, l;
} node;

node str[30];
string stand;
string re;
char p = 'A';
void init(node *str) {
    for (int i = 0; i < 26; i++) {
        stand[i] = p;
        str[i].ch = p++;
        str[i].num = 0;
        str[i].flag = 0;
        str[i].l = i;
    }
    return ;
}
void output() {
    for (int i = 0; i < 26; i++) {
        cout << "ch : " << str[i].ch;
        cout << " num :" << str[i].num;
        cout << " l : " << str[i].l;
        cout << " flag:" << str[i].flag << endl;
    }
    return ;
}

int cmp(node a, node b) {
    if (a.num == b.num) return a.l > b.l;
    else return a.num < b.num;
}

int main () {
    init(str);
    int n, m, sum = 0;
    char str1, str2, str3;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> str1 >> str2 >> str3;
        int a = str1 - 'A', b = str3 - 'A';
        if (!str[a].flag) {
            sum += 1;
            str[a].flag = 1;
        }
        if (!str[b].flag) {
            sum += 1;
            str[b].flag = 1;
        }
        if (str2 == '<') {
            int temp = str[b].num + 1;
            if (temp > str[b].num) str[b].num = temp;
        } 
    }
    sort(str, str + sum, cmp);
    //output();
    for (int i = 0; i < sum; i++) {
        re[i] = str[i].ch;
    }
    int flag = re.compare(0, sum - 1, stand, 0, 25);
    if (flag )
    cout << endl;
    return 0;
}
