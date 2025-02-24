/*************************************************************************
    > File Name: 4.P1443.cpp
    > Author: 
    > Mail: 
    > Created Time: Mon Feb 17 00:35:09 2025
 ************************************************************************/

#include <cstdio>
#include <vector>
int n, m, x, y;
int direction[8][2] = { {1, 2}, {1, -2}, {-2, 1}, {-2, -1}, {2, 1}, {2, -1}, {-1, 2}, {-1, -2} };

bool is_valid(int i, int j) {
    if (i < 0 || j < 0 || i >= n || j >= m) return false;
    return true;
}

void dfs(std::vector<std::vector<int> > &ans, int xx, int yy, int k) {
    if (ans[xx][yy] != -1 && ans[xx][yy] <= k) return ;
    ans[xx][yy] = k;
    for (int i = 0; i < 8; i++) {
        int new_x = xx + direction[i][0];
        int new_y = yy + direction[i][1];
        if (is_valid(new_x, new_y)) dfs(ans, new_x, new_y, k + 1);
    } 
    return ;
}

int main() {
    scanf("%d%d%d%d", &n, &m, &x, &y);
    std::vector<std::vector<int> > ans(n, std::vector<int> (m, -1));
    dfs(ans, x - 1, y - 1, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (j) printf(" ");
            printf("%d", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
