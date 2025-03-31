/*************************************************************************
	> File Name: 4.HZOJ-641.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Mar  4 12:16:41 2025
 ************************************************************************/

#include <iostream>
#include <vector>
#include <set>

#define MAX_N 2000
int in_deg[MAX_N + 5] = {0};
std::vector<std::vector<int>> g(MAX_N + 5);
int ans[MAX_N + 5], cnt = 0;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0, a, b; i < m; i++) {
        scanf("%d%d", &a, &b);
        in_deg[b] += 1;
        g[a].push_back(b);
    }
    std::set<int> q;
    for (int i = 1; i <= n; i++) {
        if (in_deg[i] == 0) q.insert(i);
    }
    while (!(q.size() == 0)) {
        int now = *q.begin();
        ans[cnt++] = now;
        q.erase(q.begin());
        for (int i = 0; i < g[now].size(); i++) {
            int next = g[now][i];
            in_deg[next] -= 1;
            if (in_deg[next] == 0) q.insert(next);
        }
    }
    for (int i = 0; i < cnt; i++) {
        if (i) printf(" ");
        printf("%d", ans[i]);
    }
    printf("\n");
    return 0;
}
