/*************************************************************************
    > File Name: 1.quick_find.cpp
    > Author: 
    > Mail: 
    > Created Time: Wed Dec 11 13:40:48 2024
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 10000
int color[MAX_N + 5] = {0};

void init(int n) {
    for (int i = 0; i < n; i++) {
        color[i] = i;
    }
    return ;
}

int find(int a) {
    return  color[a];
}

int merge(int a, int b, int n) {
    int color_a = find(a), color_b = find(b);
    if (color_a == color_b) return 0;
    for (int i = 0; i < n; i++) {
        if (color[i] == color_a) {
            color[i] = color_b;
        }
    }
    return 1;
}

void output(int n) {
    int ret = 0;
    for (int i = 0; i < n; i++) {
        ret += printf("%3d", i);
    }
    printf("\n");
    for (int i = 0; i < ret; i++) printf("-");
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%3d", color[i]);
    }
    printf("\n");
    return ;
}

int main() {
    int n, a, b;
    cin >> n;
    init(n);
    while (cin >> a >> b) {
        printf("merge %d with %d : %d\n", a, b, merge(a, b, n));
        output(n);
    }
    return 0;
}
