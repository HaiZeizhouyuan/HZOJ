/*************************************************************************
	> File Name: 169.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue May 26 11:30:30 2020
 ************************************************************************/

#include <iostream>
using namespace std;
#define max_n 128
#define max_m 30000

int ans[max_n + 5] = {0};
char str[max_m + 5];

void crack (char *str) {
    int sum = 0;
    for (int i = 0; str[i]; i++){
        char tmp = str[i];
        if (tmp >= 'A' && tmp <= 'Z') sum += ans[tmp];
    }
    cout << sum << endl;
    return ;
}

int main() {
    int n, num;
    char alp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> alp >> num;
        ans[alp] = num;
    }
    cin >> str;
    crack(str);
    return 0;
}
