#include<stdio.h>
#define max_n 100000
int n, a[max_n + 5];
int f(int x, int p){
    if(p >= n) return x - 1;
    return f(x + 1, p + a[p]);
}
int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d\n", f(1, 0));
    return 0;
}
