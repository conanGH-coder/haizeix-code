/*************************************************************************
    > File Name: 4.HZOJ-42.cpp
    > Author: 
    > Mail: 
    > Created Time: Tue Feb  4 17:38:11 2025
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_M 20
#define MAX_N 10000
int nums[MAX_M + 5] = {0};
int f[MAX_M + 5][MAX_N + 5] = {0};

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; i++) {
        cin >> nums[i];
    }
    for (int i = 1; i <= m; i++) {
        f[i][0] = 1;
        for (int j = 1; j <= n; j++) {
            f[i][j] = f[i - 1][j];
            if (j < nums[i]) continue;
            f[i][j] += f[i][j - nums[i]];
            f[i][j] %= 9973;
        }
    }
    cout << f[m][n] << endl;
    return 0;
}
