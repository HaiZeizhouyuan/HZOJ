/*************************************************************************
	> File Name: 261.c
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年08月27日 星期四 16时28分35秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define max_n 1000
typedef struct Stack {
    long long  *data;
    int size, top;
} Stack;

Stack *getNewStack(int size) {
    Stack *s = (Stack *)malloc(sizeof(Stack));
    s->data = (long long *)malloc(sizeof(long long) * size);
    s->size = size;
    s->top = 0;
    return s;
}

int push(Stack *s, long long val) {
    if (s == NULL) return 0;
    if (s->top == s->size - 1) return 0;
    s->data[++s->top] = val;
    return 1;
}

long long top(Stack *s) {
    return s->data[s->top];
}

int empty(Stack *s) {
    return s->top == 0;
}

int pop(Stack *s) {
    if (s == NULL) return 0;
    if (empty(s)) return 0;
    s->top -= 1;
    return 1;
}

void clear(Stack *s) {
    if (s == NULL) return ;
    free(s->data);
    free(s);
    return ;
}

long long sum[max_n + 5];
long long  m[max_n + 5];
int main() {
    int n;
    scanf("%d", &n);
    m[0] = 0x8000000000000000LL;
    getchar();
    Stack *f = getNewStack(max_n);
    Stack *b = getNewStack(max_n);
    for (int i = 0; i < n; i++) {
        char opt;
        scanf("%c", &opt);
        getchar();
        switch(opt) {
            case 'I': {
                long long x;
                scanf("%lld", &x);
                getchar();
                push(f, x);
                int ind = f->top;
                sum[ind] = sum[ind - 1] + x;
                m[ind] = (m[ind - 1] > sum[ind] ? m[ind - 1] : sum[ind]);
            } break;
            case 'D':{
                if (empty(f)) break;
                int p = pop(f);
            } break;
            case 'L': {
                if (empty(f)) break;
                long long ft = top(f);
                push(b, ft);
                pop(f);
            } break;
            case 'R': {
                if (empty(b)) break;
                long long bt = top(b);
                push(f, bt);
                pop(b);
                int ind = f->top;
                sum[ind] = sum[ind - 1] + bt;
                m[ind] = (sum[ind] > m[ind - 1] ? sum[ind] : m[ind - 1]);

            } break;
            case 'Q': {
                long long k;
                scanf("%lld", &k);
                getchar();
                printf("%lld\n", m[k]);
            } break;
            default: {
                getchar();
            } break;
        }
    }
    clear(f);
    clear(b);
    return 0;
}
