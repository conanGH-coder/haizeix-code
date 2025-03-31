/*************************************************************************
	> File Name: 1.CF1833E.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Mar  5 01:37:19 2025
 ************************************************************************/

#include <iostream>
#include <vector>
#define MAX_N 2 * 1e-5

std::vector<std::vector<int>> e(MAX_N + 5);
std::vector<int> fa(MAX_N + 5);

void init(int n) {
    for (int i = 0; i <= n; i++) fa[i] = i, e[i].clear();
    return ;
}

int find(int x) {
    return fa[x] = (fa[x] == x ? x : find(fa[x]));
}

void merge(int a, int b) {
    fa[find(a)] = find(b);
    return ;
}

void solve() {
    int n;
    scanf("%d", &n);
    init(n);
    for (int u = 1, v; u <= n; u++) {
        scanf("%d", &v);
        merge(u, v); 
        e[u].push_back(v);
        e[v].push_back(u);
    }
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (fa[i] == i) sum++;
    }
    return ;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) solve();
    return 0;
}
