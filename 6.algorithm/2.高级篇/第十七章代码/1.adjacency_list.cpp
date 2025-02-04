/*************************************************************************
    > File Name: 1.adjacency_list.cpp
    > Author: 
    > Mail: 
    > Created Time: Sun Feb  2 19:07:18 2025
 ************************************************************************/

#include <iostream>
using namespace std;

// 存储边的数据结构
struct Edge {
    // to表示该边指向的节点
    // nxt表示下一条边的数组下标
    int to, nxt;
} e[1005];
// cnt表示当前用了多少条边了
int head[1005], cnt = 1;
void add(int a, int b) {
    e[++cnt] = {b, head[a]};
    head[a] = cnt;
    return ;
}

void output(int ind) {
    cout << ind << " : ";
    // 当p为0时，说明已经没有其他边了
    for (int p = head[ind]; p; p = e[p].nxt) {
        int to = e[p].to;
        cout << to << " ";
    }
    cout << endl;
    return ;
}

int main() {
    // n代表有多少个点
    // m代表有多少条边
    int n, m;
    cin >> n >> m;
    for (int i = 1, a, b; i <= m; i++) {
        // a表示源节点
        // b表示目标节点
        cin >> a >> b;
        add(a, b);
    }
    // 输出节点1到n所能直接指向的点
    for (int i = 1; i <= n; i++) {
        output(i);
    }
    return 0;
}
