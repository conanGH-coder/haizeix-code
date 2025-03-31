/*************************************************************************
	> File Name: 20.HZOJ-48.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Mar 10 18:17:12 2025
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_V 10000
int dp[MAX_V + 5] = {0};

int main() {
    int N, V, v, w;
    scanf("%d%d", &N, &V);
    // dp[i][j] = max(dp[i - 1][j], dp[i][j - v[i]] + w[i]
    for (int i = 1; i <= N; i++) {
        scanf("%d%d", &v, &w); 
        for (int j = v; j <= V; j++) {
            dp[j] = max(dp[j], dp[j - v] + w);
        }
    }
    printf("%d\n", dp[V]);
    return 0;
}
