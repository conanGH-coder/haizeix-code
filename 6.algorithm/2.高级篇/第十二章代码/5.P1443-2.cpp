/*************************************************************************
    > File Name: 5.P1443-2.cpp
    > Author: 
    > Mail: 
    > Created Time: Mon Feb 17 11:23:34 2025
 ************************************************************************/

#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int direction[8][2] = { {1, 2}, {1, -2}, {-2, 1}, {-2, -1}, {2, 1}, {2, -1}, {-1, 2}, {-1, -2} };
struct Node {
    Node (int x, int y, int cnt) {
        this->xx = x;
        this->yy = y;
        this->cnt = cnt;
    }
    int xx, yy, cnt;
};

bool is_valid(int i, int j, int n, int m) {
    if (i < 0 || j < 0 || i >= n || j >= m) return false;
    return true;
}

int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<vector<int>> ans(n, vector<int>(m, -1));
    queue<Node *> q;
    q.push(new Node(x - 1, y - 1, 0));
    ans[x - 1][y - 1] = 0;
    while (!q.empty()) {
        int xx = q.front()->xx;
        int yy = q.front()->yy;
        int cnt = q.front()->cnt;
        q.pop();
        for (int i = 0; i < 8; i++) {
            int new_x = xx + direction[i][0];
            int new_y = yy + direction[i][1];
            if (!is_valid(new_x, new_y, n, m)) continue;
            if (ans[new_x][new_y] != -1) continue;
            q.push(new Node(new_x, new_y, cnt + 1));
            ans[new_x][new_y] = cnt + 1;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (j) cout << " ";
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}
