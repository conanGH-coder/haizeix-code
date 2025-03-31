/*************************************************************************
	> File Name: 3.red_black_tree.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Mar 26 23:26:48 2025
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RED    0
#define BLACK  1
#define DBLACK 2
#define NIL (&__NIL)

typedef struct Node {
    int key, color; // 0 : red 1 : black 2 : double black
    struct Node *lchild, *rchild;
} Node;
Node __NIL;
__attribute__((constructor))
void init_NIL() {
    NIL->key = -1;
    NIL->color = BLACK;
    NIL->lchild = NIL->rchild = NIL;
    return ;
}

int main() {
    srand(time(0));
    return 0;
}
