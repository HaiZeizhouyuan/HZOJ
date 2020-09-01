/*************************************************************************
	> File Name: 478.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月31日 星期一 16时07分56秒
 ************************************************************************/

#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#include <string.h>
char str[105];
char *tmp;
char str_1[5] = {""};
char str_2[5] = {"@"};
char strn[10] = {"nospam"};
char stra[5] = {"at"};
char strf[105];
char strb[105];
char re[105];
char tmp1[105];
char tmp2[105];
char *result[200];
int len;

int func(char *ex1_str, char *ex2_str, char *str1, int len_st, int q) {
    memset(strf, 0, sizeof(strf));
    memset(strb, 0, sizeof(strb));
    tmp = strstr(str1 + q, ex1_str);
    //printf("ex1_str : %s, ex2_str : %s, str1 : %s\n", ex1_str, ex2_str, str1);
    //printf("tmp = %s ", tmp);
    if (tmp != NULL) {
        int len1 = strlen(tmp); 
        int loc = strlen(str1) - len1;
        strncpy(strf, str1, loc);
        strncpy(strb, tmp + len_st , len1 - len_st);
       // printf("fdfd: %s\n", result[0]);
        sprintf(re, "%s%s%s", strf, ex2_str, strb);
       // printf("fumre2: %s\n", result[0]);
        return loc;
    }
    return -1;
}

int main() {
    int len_n = strlen(strn);
    int len_a = strlen(stra);
    int ans = 0;
    scanf("%s", str);
    len = strlen(str);
    int flag1, flag2;
    for (int j = 0; j < len; j += flag2) {
            memset(re, 0, sizeof(re));
            flag2 = 0;
            flag2 = 1 +  func(stra, str_2, str, len_a, j);
            strcpy(tmp1, re);
            if (flag2 == 0) {
                flag2 += 1;
                continue;
            }
          strcpy(result[ans++], re); 
        printf("ans = %d, re = %s\n", ans, result[0]);
        for (int i = 0; i < len; i += flag1) {
            flag1 = 0;
            flag1 = 1 + func(strn, str_1, tmp1, len_n, i);
            if (flag1 == 0) {
                flag1 += 1;
                continue;
            }
             printf("old :%s\n", result[0]);
            result[ans++] = re; 
            printf("ans :%d, 　re = %s\n", ans, result[1]);
            strcpy(re, "4154545");
            printf("ans :%d , %s ,%s\n", ans, result[0], result[1]);
        }
    }
    for (int i = 0; i < ans; i++) {
        printf("%s\n", result[i]);
    }
    sort(result, result + ans);
    for (int i = 0; i < ans; i++) {
        printf("%s\n", result[i]);
    }
    return 0;
}
