/*************************************************************************
	> File Name: 537.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月18日 星期五 21时16分44秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;

int l, c, cnt, ans, y, f;
char alp[30];
char com[10];
void p() {
    for (int i = 0; i < l; i++) {   
        cout << com[i];
    }
    cout << endl;
    return ;
}

int func(int s, int left) {
    if (left == 0) {
        if (y < 1 || f < 2) return 0; 
        ans += 1;
        p();
        if (ans == 25000) return -1;
        return 0;
    }
    for (int i = s; i < c - left + 1; i++) {
        int flag = 0;
        if (alp[i] == 'a' || alp[i] == 'e' || alp[i] == 'i' || alp[i] == 'o' || alp[i] == 'u') y += 1;
        else {
            flag = 1;
            f += 1;
        }
        com[cnt++] = alp[i];
        if (func(i + 1, left - 1) == -1) return -1;
        cnt -= 1;
        if (flag == 1) f -= 1;
        else y -= 1;
    }
}

int main() {
    cin >> l >> c;
    for (int i = 0; i < c; i++) {
        cin >> alp[i];
    }
    sort(alp, alp + c);
    func(0, l);
    return 0;
}
