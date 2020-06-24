#include <stdio.h>
int check(int a){
    int h, t, o;
    h = a / 100;
    t = a % 100 / 10;
    o = a % 100 % 10;
    if(h == 9 || t == 9 || o == 9){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    int a;
    scanf("%d", &a);
    printf("%s\n", check(a) ? "NO":"YES");
    return 0;    
}
