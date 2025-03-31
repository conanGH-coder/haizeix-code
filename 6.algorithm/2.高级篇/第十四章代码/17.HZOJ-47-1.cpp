/*************************************************************************
	> File Name: 17.HZOJ-47-1.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Mar 10 17:44:38 2025
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 100
#define MAX_V 10000
#define MAX_W 1000000
int v[MAX_V + 5], w[MAX_W + 5];
int dp[MAX_N + 5][MAX_V + 5] = {0};

int main() {
    int V, n;
    scanf("%d%d", &V, &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d%d", v + i, w + i);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= V; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j - v[i] < 0) continue;
            dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
        }
    }
    printf("%d\n", dp[n][V]);
    return 0;
}
