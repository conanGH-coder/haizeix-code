/*************************************************************************
	> File Name: 1.binary_search_tree.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun Mar  2 11:16:49 2025
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define K(n) (n ? n->key : -1)

typedef struct Node {
    int key;
    struct Node *lchild, *rchild;
} Node;

Node *getNewNode(int key) {
    Node *p = (Node *)malloc(sizeof(Node));
    p->key = key;
    p->lchild = p->rchild = NULL;
    return p;
}

Node *insert(Node *root, int key) {
    if (root == NULL) return getNewNode(key);
    if (K(root) == key) return root;
    if (key < K(root)) root->lchild = insert(root->lchild, key);
    else if (key > K(root)) root->rchild = insert(root->rchild, key); 
    return root;
}

Node *predecessor(Node *root) {
    Node *temp = root->lchild;
    while (temp->rchild) temp = temp->rchild;
    return temp;
}

Node *erase(Node *root, int key) {
    if (root == NULL) return root;
    if (key < K(root)) root->lchild = erase(root->lchild, key);
    else if (key > K(root)) root->rchild = erase(root->rchild, key);
    else {
        if (!root->lchild || !root->rchild) {
            Node *temp = root->lchild ? root->lchild : root->rchild;
            free(root);
            return temp;
        } else {
            Node *temp = predecessor(root);
            root->key = temp->key;
            root->lchild = erase(root->lchild, temp->key);
        }
    }
    return root;
}

void clear(Node *root) {
    if (root == NULL) return ;
    clear(root->lchild);
    clear(root->rchild);
    free(root);
    return ;
}

void output(Node *root) {
    if (root == NULL) return ;
    printf("%d : (%d, %d)\n", 
            K(root),
            K(root->lchild),
            K(root->rchild));
    output(root->lchild);
    output(root->rchild);
    return ;
}

void in_order(Node *root) {
    if (root == NULL) return ;
    in_order(root->lchild);
    printf("%d ", K(root));
    in_order(root->rchild);
    return ;
}

int main() {
    srand(time(0));
    #define MAX_N 10
    Node *root = NULL;
    for (int i = 0; i < MAX_N; i++) {
        int key = rand() % 100;
        printf("insert key %d to BST\n", key);
        root = insert(root, key);
    }
    output(root);
    printf("in order : \n");
    in_order(root);
    printf("\n");
    int x;
    while (~scanf("%d", &x)) {
        printf("erase %d from BST\n", x);
        root = erase(root, x);
        in_order(root);
        printf("\n");
    }
    return 0;
}
