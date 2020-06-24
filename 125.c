/*************************************************************************
	> File Name: 125.c
	> Author: 
	> Mail: 
	> Created Time: Mon May 11 00:48:20 2020
 ************************************************************************/

#include<stdio.h>
int checkh(int endh){
    if (endh <= 12) return endh;
    else if (endh <= 24) return endh - 12;
    else if (endh < 36) return endh - 24;
    else return endh - 36;
}
const char* checkapm( int endh ){
    if (endh < 12) return "am";
    else if (endh < 24) return "pm";
    else if (endh < 36) return "am";
    else return "pm";
}
void endtime(int h, int m, int s, int t){
    int endh, endm, ends, starttime, endtime;
    double percentage;
    starttime = h * 3600 + m * 60 + s;
    endtime = starttime + t;
    endh = endtime / 3600;
    endm = endtime % 3600 / 60;
    ends = endtime % 60;
    percentage =  1.0 * t / (24 * 3600);
    printf("%d:%d:%d%s\n%.2lf%%\n", checkh(endh), endm, ends, checkapm(endh), 100 *  percentage);
    return ;
}
int main(){
    int h, m, s, t;
    scanf("%d%d%d%d", &h, &m, &s, &t);
    endtime(h, m, s, t);
    return 0;
}
