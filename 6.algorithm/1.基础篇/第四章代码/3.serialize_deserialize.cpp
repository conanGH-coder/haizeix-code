/*************************************************************************
    > File Name: 3.serialize_deserialize.cpp
    > Author: 
    > Mail: 
    > Created Time: Sat Feb  8 17:01:21 2025
 ************************************************************************/

#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define K(n) (n ? n->key : -1)
#define MAX_NODE 10

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
    if (rand() % 2) root->lchild = insert(root->lchild, key); 
    else root->rchild = insert(root->rchild, key);
    return root;
} 

Node *getRandomBinaryTree(int n) {
    Node *root = NULL;
    for (int i = 0; i < n; i++) {
        root = insert(root, rand() % 100);
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

char buff[1000]; // 存储字符串的数组
int len = 0; // 广义表信息的长度

void __serialize(Node *root) {
    if (root == NULL) return ;
    len += snprintf(buff + len, 100, "%d", root->key);
    if (root->lchild == NULL && root->rchild == NULL) return ;
    len += snprintf(buff + len, 100, "(");
    __serialize(root->lchild);
    if (root->rchild) {
        len += snprintf(buff + len, 100, ",");
        __serialize(root->rchild);
    }
    len += snprintf(buff + len, 100, ")");
    return ;
}

void serialize(Node *root) {
    memset(buff, 0, sizeof(buff));
    len = 0;
    __serialize(root);
    return ;
}

void pre_order(Node *root) {
    if (root == NULL) return ;
    printf("%d ", root->key);
    pre_order(root->lchild);
    pre_order(root->rchild);
    return ;
}

void in_order(Node *root) {
    if (root == NULL) return ;
    in_order(root->lchild);
    printf("%d ", root->key);
    in_order(root->rchild);
    return ;
}

void print(Node *root) {
    printf("%d(%d, %d)\n",
           K(root), K(root->lchild),
           K(root->rchild));
    return ;
}

void output(Node *root) {
    if (root == NULL) return ;
    print(root);
    output(root->lchild);
    output(root->rchild);
    return ;
}

Node *deserialize(char *buff, int n) {
    Node **s = (Node **)malloc(sizeof(Node *));
    int top = -1, flag = 0, scode = 0;
    Node *p = NULL, *root = NULL;
    for (int i = 0; buff[i]; i++) {
        switch (scode) {
            // 0 表示做任务分发
            case 0: {
                if (buff[i] >= '0' && buff[i] <= '9') scode = 1;
                else if (buff[i] == '(') scode = 2;
                else if (buff[i] == ',') scode = 3;
                else scode = 4;
                i -= 1;
            } break;
            case 1: {
                int num = 0;
                while (buff[i] <= '9' && buff[i] >= '0') {
                    num = num * 10 + (buff[i] - '0');
                    i += 1;
                }
                p = getNewNode(num);
                if (top >= 0 && flag == 0) s[top]->lchild = p;
                if (top >= 0 && flag == 1) s[top]->rchild = p;
                i -= 1;
                scode = 0;
            } break;
            case 2: {
                s[++top] = p;
                flag = 0;
                scode = 0;
            } break;
            case 3: { flag = 1; scode = 0; } break;
            case 4: {
                root = s[top];
                top -= 1;
                scode = 0;
            } break;
        }
    }
    return root;
}

int main() {
    srand(time(0));
    Node *root = getRandomBinaryTree(MAX_NODE);
    pre_order(root);
    printf("\n");
    in_order(root);
    printf("\n");
    output(root);
    serialize(root);
    printf("Buff[] : %s\n", buff);
    Node *new_node = deserialize(buff, len);
    output(new_node);
    return 0;
}
