/*************************************************************************
	> File Name: 3.P1135.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 27 Oct 2024 10:56:49 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

void dfs(int k, int a, int n, vector<int> &to, vector<int> &dis) {
    if (dis[a] <= k) return ;
    dis[a] = k;
    if (a + to[a] <= n) dfs(k + 1, a + to[a], n, to, dis);
    if (a - to[a] >= 1) dfs(k + 1, a - to[a], n, to, dis);
    return ;
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> to(n + 1), dis(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> to[i];
        dis[i] = n + 1;
    }
    dfs(0, a, n, to, dis);
    cout << (dis[b] == n + 1 ? -1 : dis[b]) << endl;
    return 0;
}
