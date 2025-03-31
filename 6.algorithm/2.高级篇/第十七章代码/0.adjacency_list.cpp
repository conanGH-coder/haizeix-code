/*************************************************************************
	> File Name: 0.adjacency_list.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Mar 26 21:41:29 2025
 ************************************************************************/

#include <iostream>
using namespace std;

struct Edge {
    int to, nxt;
} e[6005];
int head[6005], cnt = 0;
int h[6005], fa[6005];
void add(int a, int b) {
    e[++cnt] = {b, head[a]};
    head[a] = cnt;
    return ;
}

pair<int, int> dfs(int root) {
    if (root == 0) return {0, 0};
    int select_cur = h[root];
    int not_select_cur = 0;
    for (int p = head[root]; p; p = e[p].nxt) {
        int to = e[p].to;
        auto [select_node, not_select_node] = dfs(to);
        select_cur += not_select_node;
        not_select_cur += max(select_node, not_select_node);
    }
    return {select_cur, not_select_cur};
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> h[i];
    for (int i = 0, l, k; i < n - 1; i++) {
        cin >> l >> k;
        add(k, l);
        fa[l] = 1;
    }
    int root;
    for (int i = 1; i <= n; i++) {
        if (fa[i]) continue;
        root = i;
        break;
    }
    auto [select_root, not_select_root] = dfs(root);
    cout << max(select_root, not_select_root) << endl;
    return 0;
}
