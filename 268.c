/*************************************************************************
	> File Name: 268.c
	> Author: 
	> Mail: 
	> Created Time: Thu Aug  6 19:41:55 2020
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>

typedef struct Queue{
    int *data;
    int head, tail, cnt, size;
} Queue;

Queue *getNewQueue (int n) {
    Queue *q = (Queue *)malloc(sizeof(Queue) * n);
    q->data = (int *)malloc(sizeof(int) * n);
    q->size = n;
    q->head = q->tail = q->cnt = 0;
    return q;
} 

int front (Queue *q) {
    return q->data[q->head];
}

int empty(Queue *q) {
    return q->cnt == 0;
}

int push(Queue *q, int val) {
    if (q == NULL) return 0;
    if (q->cnt == q->size) return 0;
    q->data[(q->tail)++] = val;
    if (q->tail == q->size) q->tail -= q->size;
    q->cnt += 1;
    return 1;
}

int pop(Queue *q) {
    if (q == NULL) return 0;
    if (empty(q)) return 0;
    q->head += 1;
    if (q->head == q->size) q->head -= q->size;
    q->cnt -= 1;
    return 1;
}

void clear(Queue *q) {
    if (q == NULL) return ;
    free(q->data);
    free(q);
    return ;
}

int main () {
    int n, m;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &m);
        for (int j = 0;, j < m; j++) {
            int temp;
            scanf("%d", &temp);
        }
    }
    return 0;
}
