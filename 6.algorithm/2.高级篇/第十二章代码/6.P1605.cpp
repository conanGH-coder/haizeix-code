/*************************************************************************
    > File Name: 6.P1605.cpp
    > Author: 
    > Mail: 
    > Created Time: Mon Feb 17 12:55:56 2025
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 5
#define MAX_M 5
int arr[MAX_N + 5][MAX_M + 5] = { 0 };
int dir[4][2] = {
    {-1, 0}, {1, 0}, {0, -1}, {0, 1}
};
int n, m;
int sx, sy, fx, fy;

int dfs(int x, int y, int fx, int fy) {
    if (x == fx && y == fy) {
        return 1;
    }
    int ans = 0;
    arr[x][y] = 1;
    for (int i = 0; i < 4; i++) {
        int dx = x + dir[i][0];
        int dy = y + dir[i][1];
        if (dx < 1 || dx > n) continue;
        if (dy < 1 || dy > m) continue;
        if (arr[dx][dy]) continue; 
        ans += dfs(dx, dy, fx, fy);
    }
    arr[x][y] = 0;
    return ans;
}

int main() {
    int t;
    cin >> n >> m >> t;
    cin >> sx >> sy >> fx >> fy;
    for (int i = 0, a, b; i < t; i++) {
        cin >> a >> b;
        arr[a][b] = 1;
    }
    int ans = 0;
    ans += dfs(sx, sy, fx, fy);
    cout << ans << endl;
    return 0;
}
