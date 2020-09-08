/*************************************************************************
	> File Name: 644.c
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月08日 星期二 17时01分12秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<unistd.h>
 
#define swap(a, b) {\
    __typeof(a) __temp = (a);\
    (a) = (b), (b) = __temp;\
}

void downUpdata(int *arr, int ind, int n) {
    while ((ind << 1) <= n) {
        int temp = ind, l = ind << 1, r = ind << 1 | 1;
        if (l <= n && arr[l] > arr[temp]) temp = l;
        if (r <= n && arr[r] > arr[temp]) temp =r;
        if (temp == ind) break;
        swap(arr[temp], arr[ind]);
        ind = temp;
    }
    return ;
}

void heap_sort(int *arr, int n) {
    arr -= 1;
    for (int i = n >> 1; i >= 1; i--) {
        downUpdata(arr, i, n); 
    }
    for (int i = n; i > 1; i--) {
        swap(arr[i], arr[1]);
        downUpdata(arr, 1, i - 1);
    }
    return ;
}

int main () {
    int n, op, tmp, ans = 0;
    scanf("%d", &n);
    int num[n + 5];
    for (int i = 0; i < n; i++) {
        scanf("%d", &op);    
        switch(op) {
            case 1:{
                scanf("%d", &tmp);
                num[ans++] = tmp;
               /* for (int i = 0; i < ans; i++) {
                    printf("%d, ",num[i]);
                }
                printf("\n\n");*/
                heap_sort(num, i + 1);
            } break;
            case 2:{
                if (ans > 0) printf("%d\n", num[ans - 1]);
                else printf("empty\n");
            } break;
            case 3: {
                ans -= 2;
            } break;
        }
        for(int i = 0; i < ans; i++) {
            i && printf(", ");
            printf("%d", num[i]);
        }
        printf("\n");
       
    }

    return 0;
}
