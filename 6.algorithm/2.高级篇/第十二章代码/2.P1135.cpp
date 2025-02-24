/*************************************************************************
    > File Name: 2.P1135.cpp
    > Author: 
    > Mail: 
    > Created Time: Sun Feb 16 18:50:48 2025
 ************************************************************************/

#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> arr;
#define MAX_N 200
vector<int> vis;

void dfs(int a, int n, int k) {
    if (vis[a] <= k) return ;
    vis[a] = k;
    if (a - arr[a - 1] >= 1) dfs(a - arr[a - 1], n, k + 1);
    if (a + arr[a - 1] <= n) dfs(a + arr[a - 1], n, k + 1); 
    return ;
}

int main() {
    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);
    vis.push_back(0);
    for (int i = 0, c; i < n; i++) {
        scanf("%d", &c);
        arr.push_back(c);
        vis.push_back(n + 1);
    }
    vis.push_back(n + 1);
    dfs(a, n, 0);
    printf("%d\n", (vis[b] == n + 1 ? -1 : vis[b]));
    return 0;
}
