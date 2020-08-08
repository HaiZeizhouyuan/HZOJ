/*************************************************************************
	> File Name: 572.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Aug  7 11:46:08 2020
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define max_n 400000
#define swap(a, b) ({\
    __typeof(a) __temp = (a);\
    (a) = (b), (b) = __temp;\
})


long long A[max_n + 5];
long long B[max_n + 5];

typedef struct Queue {
    long long *data;
    int head, tail, cnt, size;
} Queue;

Queue *init(int n);
int push(Queue *q, long long val);
long long  front(Queue *q);
int empty(Queue *q);
int pop(Queue *q);
void clear(Queue *q);
void insert_sort(long long *data, int n);
void output(long long *data, int n);

int main () {
    int n;
    scanf("%d", &n);
    Queue *q = init(n);
    for (int i = 0; i < n; i++) scanf("%lld", &A[i]);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &B[i]);
    }
    for (int i = n - 1; i >= 0; i--) push(q, A[0] + B[i]);
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            long long sum = A[i] + B[j];
            if(sum < front(q)) {
                pop(q);
                push(q, sum);
                insert_sort(q->data, n);
            } else {
                break;
            }
        }
    }
    output(q->data, n);
    clear(q);
    return 0;
}

Queue *init(int n) {
    Queue *q = (Queue *)malloc(sizeof(Queue));
    q->data = (long long*)malloc(sizeof(long long) * n);
    q->head = q->tail = q->cnt = 0;
    q->size = n;
    return q;
}

int push(Queue *q, long long val) {
    if (q == NULL) return 0;
    if (q->cnt == q->size) return 0;
    q->data[q->tail++] = val;
    if (q->tail == q->size) q->tail = 0;
    q->cnt += 1;
    return 1;
}

long long front(Queue *q) {
    return q->data[q->head];
}

int empty(Queue *q) {
    return q->cnt == 0;
}

int pop(Queue *q) {
    if (q == NULL) return 0;
    if (empty(q)) return 0;
    q->head += 1;
    if (q->head == q->size) q->head = 0;
    q->cnt -= 1;
    return 1;
}

void clear(Queue *q) {
    if (q == NULL) return ;
    free(q->data);
    free(q);
    return ;
}

void insert_sort(long long *data, int n) {
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0 && (data[j] > data[j - 1]); j--) {
            swap(data[j], data[j - 1]);
        }
    }
    return ;
}

void output(long long *data, int n) {
    for (int i = n - 1; i >= 0; i--) {
        printf("%lld\n", data[i]);
    }
}
