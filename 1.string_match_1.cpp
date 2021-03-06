/*************************************************************************
	> File Name: 1.string_match_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月03日 星期三 19时18分28秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
int violen_match(const  char *s, const char *t) {
    for (int i = 0; s[i]; i++) {
        int flag = 1;
        for (int j = 0; t[j] && flag; j++) {
            flag = flag && (s[i + j] && s[i + j] == t[j]);
        }
        if (flag) return i;
    }
    return -1;
}

int getNext(const char *t, int &j, char input, int *next) {
    while(j != -1 && t[j + 1] != input) j = next[j];
    if (t[j + 1] == input) j += 1;
    return j; 
    
}

int kmp(const char *s, const char *t) {
    int n = strlen(t);
    int *next = (int *)malloc(sizeof(int) * (n + 1));
    next[0] = -1;
    for (int i = 1, j = -1; t[i]; i++) next[i] = getNext(t, j, t[i], next);
    for (int i = 0, j = -1; s[i]; i++) {
        if (getNext(t, j, s[i], next) != n - 1) continue;
        return i - n + 1;
    }
    free(next);
    return -1;
}

int sunday(const char *s, const char *t) {
    int offset[256];//每个字符最后出现的位置
    int n = strlen(t), m = strlen(s); 
    for (int i = 0; i < 256; i++) offset[i] = n + 1;//初始化，假设都没有出现过,即倒数n + 1位(-1位)，
    for (int i = 0; t[i]; i++) offset[t[i]] = n - i;
    for(int i = 0; i + n <= m; i += offset[s[i + n]]) {
        int flag = 1;
        for (int j = 0; t[j] && flag; j++) {
            flag = flag && (s[i + j] == t[j]);
        }
        if (flag) return i;
    }
    return -1;
}

int shift_and(const char *s, const char *t) {
    int d[256] = {0}, n = 0;
    for (int i = 0; t[i]; n++, i++) d[t[i]] |= (1 << i);
    int p = 0;
    for (int i = 0; s[i]; i++) {
        p = (p << 1 | 1) & d[s[i]];
        if (p & (1 << (n - 1))) return i - n + 1;
    }
    return -1;
}
int main() {
    char s[100], t[100];
    while(scanf("%s%s", s, t) != EOF) {
        printf("violen_match(%s, %s) = %d\n", s, t, violen_match(s, t));
        printf("kmp(%s, %s) = %d\n", s, t, kmp(s, t));
        printf("sunday(%s, %s) = %d\n", s, t, sunday(s, t));
        printf("shift_and(%s, %s) = %d\n",s, t, shift_and(s, t));
        cout << endl;
    }
    return 0;
}
