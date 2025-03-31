/*************************************************************************
	> File Name: 5.HZOJ-636.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Mar  4 12:56:29 2025
 ************************************************************************/

#include <iostream>
#include <queue>
#include <vector>
#define max(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    std::vector<int> in_deg(n);
    std::vector<std::vector<int>> g(n + 1);
    for (int i = 0, a, b; i < m; i++) {
        scanf("%d%d", &a, &b);
        in_deg[b] += 1;
        g[a].push_back(b);
    }
    std::queue<int> q;
    std::vector<int> ans(n + 1);
    for (int i = 1; i <= n; i++) {
        if (in_deg[i]) continue;
        q.push(i);
        ans[i] = 1;
    }
    while (!q.empty()) {
        int now = q.front();
        q.pop();
        for (int i = 0, I = g[now].size(); i < I; i++) {
            int next = g[now][i];
            in_deg[next] -= 1;
            if (in_deg[next] == 0) q.push(next);
            ans[next] = max(ans[now] + 1, ans[next]);
        }
    }
    for (int i = 1; i <= n; i++) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
