/*************************************************************************
	> File Name: 380.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Jun 19 10:19:50 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
#define max_n 100

typedef struct animal {
    int node;
    string num;
} Ani;
bool cmp(Ani a, Ani b) {
    if (a.num.size() - b.num.size()) return a.num.size() > b.num.size();
    else return a.num.compare(b.num) > 0;

}

int main() {
    int n;
    cin >> n;
    Ani str[max_n + 5];
    for (int i = 0; i < n; i++) {
        cin >> str[i].num;
        str[i].node = i + 1;
    }

    sort(str, str + n, cmp);
    cout << str[0].node << endl << str[0].num << endl;
    return 0;
}
