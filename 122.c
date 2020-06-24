/*************************************************************************
	> File Name: 122.c
	> Author: 
	> Mail: 
	> Created Time: Mon May  4 23:50:35 2020
 ************************************************************************/

#include<stdio.h>
void check(int t){
    int h, m ,s;
    h = t / 3600;
    m = t % 3600 / 60;
    s = t % 60 ;
    if (h < 10) {
        if(m < 10) {
            if(s < 10) printf("0%d:0%d:0%d am\n", h, m, s);
            else printf("0%d:0%d:%d a\nm", h, m, s);
        }else{
            if(s < 10) printf("0%d:%d:0%d am\n", h, m, s);
            else printf("0%d:%d:%d am\n", h, m, s);
        }
    }else if (h < 12) {
        if(m < 10) {
            if(s < 10) printf("%d:0%d:0%d am\n", h, m, s);
            else printf("%d:0%d:%d am\n", h, m, s);
        }else{
            if(s < 10) printf("%d:%d:0%d am\n", h, m, s);
            else printf("%d:%d:%d am\n", h, m, s);
        }
    }else if (h <= 13) {
        if(m < 10) {
            if(s < 10) printf("%d:0%d:0%d midnoon\n", h, m, s);
            else printf("%d:0%d:%d midnoon\n", h, m, s);
        }else{
            if(s < 10) printf("%d:%d:0%d midnoon\n", h, m, s);
            else printf("%d:%d:%d midnoon\n", h, m, s);
        }
    }else if (h <= 22) {
        if(m < 10) {
            if(s < 10) printf("0%d:0%d:0%d pm\n", h - 12, m, s);
            else printf("0%d:0%d:%d pm\n", h - 12, m, s);
        }else{
            if(s < 10) printf("0%d:%d:0%d pm\n", h - 12, m, s);
            else printf("0%d:%d:%d pm\n", h - 12, m, s);
        }
    }else{
        if(m < 10) {
            if(s < 10) printf("%d:0%d:0%d pm\n", h - 12, m, s);
            else printf("%d:0%d:%d pm\n", h - 12, m, s);
        }else{
            if(s < 10) printf("%d:%d:0%d pm\n", h - 12, m, s);
            else printf("%d:%d:%d pm\n", h - 12, m, s);
        }
    }
}
int main(){
    int t;
    scanf("%d", &t);
    check(t);
    return 0;
}
