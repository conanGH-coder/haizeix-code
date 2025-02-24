/*************************************************************************
    > File Name: 4.P1192.cpp
    > Author: 
    > Mail: 
    > Created Time: Thu Feb  6 22:24:11 2025
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 100000
#define MOD_NUM 100003
int f[MAX_N + 5];

int main() {
    int n, k;
    cin >> n >> k;
    f[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k && i - j >= 0; j++) {
            f[i] = (f[i] + f[i - j]) % MOD_NUM;
        }
    }
    cout << f[n] << endl;
    return 0;
}