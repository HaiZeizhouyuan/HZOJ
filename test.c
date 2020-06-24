#include<stdio.h>
#include<string.h>

void f(int x) {
    x = 10;
}

int main() {
   int a = 3;
    f(a);
    printf("%d\n",a);
}

