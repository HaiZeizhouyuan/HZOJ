/*************************************************************************
	> File Name: 479.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月30日 星期日 15时54分56秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

//int ele[5690], twe[5690];
int ans1[10005][2], ans2[10005][2], ind1, ind2;

int main() {
    char str[30];
   // int w1 = 0, l1 = 0, w2 = 0, l2 = 0, anse = 0, anst = 0;
    int flag = 0;
    while(~scanf("%s", str)) {
        for (int i = 0; i < strlen(str); i++) {
            if (str[i] == 'W') {
               // w1 += 1;
                //w2 += 1;
                ans1[ind1][0]++;
                ans2[ind2][0]++;
            }
            if (str[i] == 'L') {
                //l1 += 1;
                //l2 += 1;
                ans1[ind1][1]++;
                ans2[ind2][1]++;
            }
            if (str[i] == 'E') {
               /* ele[anse++] = w1;
                ele[anse++] = l1;
                twe[anst++] = w2;
                twe[anst++] = l2;*/
                for (int i = 0; i <= ind1; i ++) {
                    printf("%d:%d\n", ans1[i][0], ans1[i][1]);
                }
                printf("\n");
                for (int i = 0; i <= ind2; i ++) {
                    printf("%d:%d\n", ans2[i][0], ans2[i][1]);

                }
                flag = 1;
                break;
            }
            if ((ans1[ind1][0] >= 11 || ans1[ind1][1] >= 11 ) && (ans1[ind1][0] - ans1[ind1][1] >= 2 || ans1[ind1][1] - ans1[ind1][0] >= 2)) {
                //ele[anse++] = w1;
                //ele[anse++] = l1;
                //w1 = 0;
                //l1 = 0;
                ind1++;
            }
            if ((ans2[ind2][0] >= 21 || ans2[ind2][1] >= 21) && (ans2[ind2][0] - ans2[ind2][1] >= 2 || ans2[ind2][1] - ans2[ind2][0] >= 2)) {
               // twe[anst++] = w2;
                //twe[anst++] = l2;
               // w2 = 0;
               // l2 = 0;
                ind2++;
            }
        }
        if (flag == 1) break;
    }
    return 0;
}
