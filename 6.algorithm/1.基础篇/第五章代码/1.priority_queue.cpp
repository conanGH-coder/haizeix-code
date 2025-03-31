/*************************************************************************
	> File Name: 1.priority_queue.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Feb 28 18:19:37 2025
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define ROOT 1
#define cmp >
#define FATHER(i) ((i) / 2)
#define LEFT(i)   ((i) * 2)
#define RIGHT(i)  ((i) * 2 + 1)
#define swap(a, b) { \
    __typeof(a) __c = (a); \
    (a) = (b); \
    (b) = __c; \
}
#define MAX_N 10

typedef struct PriorityQueue {
    int *data, *__data;
    int size, n;
} PriorityQueue;

PriorityQueue *initPQ(int size) {
    PriorityQueue *p = (PriorityQueue *)malloc(sizeof(PriorityQueue));
    p->__data = (int *)malloc(sizeof(int) * size);
    p->data = p->__data - 1;
    p->size = size;
    p->n = 0;
    return p;
}

int empty(PriorityQueue *p) {
    return p->n == 0;
}

int full(PriorityQueue *p) {
    return p->n == p->size;
}

int top(PriorityQueue *p) {
    return p->data[ROOT];
}

void UpUpdate(int *data, int i) {
    while (i > ROOT && data[i] cmp data[FATHER(i)]) {
        swap(data[i], data[FATHER(i)]);
        i = FATHER(i);
    }
    return ;
}

void DownUpdate(int *data, int i, int n) {
    int ind;
    while (LEFT(i) <= n) {
        ind = i;
        if (LEFT(i) <= n && data[LEFT(i)] cmp data[ind]) ind = LEFT(i);
        if (RIGHT(i) <= n && data[RIGHT(i)] cmp data[ind]) ind = RIGHT(i);
        if (ind == i) break;
        swap(data[ind], data[i]);
        i = ind;
    }
    return ;
}

int push(PriorityQueue *p, int x) {
    if (full(p)) return 0;
    p->data[++p->n] = x;
    UpUpdate(p->data, p->n);
    return 1;
}

int pop(PriorityQueue *p) {
    if (empty(p)) return 0;
    p->data[ROOT] = p->data[p->n--];
    DownUpdate(p->data, ROOT, p->n);
    return 1;
}

void clearPp(PriorityQueue *p) {
    if (p == NULL) return ;
    free(p->data);
    free(p);
    return ;
}

void output(PriorityQueue *p) {
    printf("Current PQ' size = %d\n", p->n);
    for (int i = 1; i <= p->n; i++) {
        printf("%d ", p->data[i]);
    }
    printf("\n");
    return ;
}

int main() {
    int val, op;
    PriorityQueue *p = initPQ(MAX_N);
    while (~scanf("%d", &op)) {
        switch (op) {
            case 1: {
                scanf("%d", &val); 
                printf("push %d to the priority_queue = %d\n", val, push(p, val));
                output(p);
            } break; 
            case 2: {
                printf("pop the ROOT from the priority_queue = %d\n", pop(p)); 
                output(p);
            } break;
            default: {
                printf("Invalid operation! Please try again!\n");
            } break;
        }
    }
    clearPp(p);
    return 0;
}
