/*************************************************************************
	> File Name: test2.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月13日 星期日 14时55分30秒
 ************************************************************************/

#include<string.h>
#include<syslib.h>
#include<stdio.h>

 
string str;
char str1[10];
int main() {
    cin >> str;
    reverse(str.begin(), str.end());
    cout << str << endl;
    scanf("%s", str1);
    strrev(str1);
    printf("%s\n", str1);
    return 0;
}
