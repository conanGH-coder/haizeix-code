/*************************************************************************
	> File Name: 1.P3366.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Mar  5 00:21:14 2025
 ************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

typedef std::pair<int, int> edge;

class UnionSet {

public:
    UnionSet(int n) : fa(n + 1) {
        for (int i = 0; i <= n; i++) fa[i] = i;
    }

    int find(int x) {
        return fa[x] = (fa[x] == x ? x : find(fa[x]));
    }

    void merge(int a, int b) {
        fa[find(a)] = find(b);
        return ;
    }

    std::vector<int> fa;
};

bool cmp(std::pair<int, edge> &e1, std::pair<int, edge> &e2) {
    return e1.first < e2.first;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    std::vector<std::pair<int, edge>> e;
    for (int i = 1, x, y, z; i <= m; i++) {
        scanf("%d%d%d", &x, &y, &z);
        edge p = std::make_pair(x, y);
        e.push_back(std::make_pair(z, p));
    }
    UnionSet u(n);
    std::sort(e.begin(), e.end(), cmp);
    int cnt = 0;
    for (int i = 0; i < m; i++) {
        int x = e[i].second.first;
        int y = e[i].second.second;
        int w = e[i].first;
        if (u.find(x) == u.find(y)) continue;
        u.merge(x, y);
        cnt += w;
    }
    int flag = 0;
    for (int i = 1; i <= n; i++) {
        if (u.fa[i] == i) flag += 1;
    }
    if (flag == 1) printf("%d\n", cnt);
    else printf("orz\n");
    return 0;
}
