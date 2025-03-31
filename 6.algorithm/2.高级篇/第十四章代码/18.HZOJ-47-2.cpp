/*************************************************************************
	> File Name: 17.HZOJ-47-1.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Mar 10 17:44:38 2025
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_V 10000
#define MAX_W 1000000
int v[MAX_V + 5], w[MAX_W + 5];
int dp[2][MAX_V + 5] = {0};

int main() {
    int V, n;
    scanf("%d%d", &V, &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d%d", v + i, w + i);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= V; j++) {
            int ind = i % 2, rind = (i - 1) % 2;
            dp[ind][j] = dp[rind][j];
            if (j - v[i] < 0) continue;
            dp[ind][j] = max(dp[ind][j], dp[rind][j - v[i]] + w[i]);
        }
    }
    printf("%d\n", dp[n % 2][V]);
    return 0;
}
