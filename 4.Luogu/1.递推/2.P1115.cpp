/*************************************************************************
    > File Name: 2.P1115.cpp
    > Author: 
    > Mail: 
    > Created Time: Thu Feb  6 18:30:10 2025
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
#define MAX_N 200000
int f[MAX_N + 5];

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0, a; i < n; i++) {
        cin >> a;
        arr.push_back(a);
    }
    f[1] = arr[0];
    int ans = f[1];
    for (int i = 2; i <= n; i++) {
        f[i] = max(arr[i - 1], f[i - 1] + arr[i - 1]);
        ans = max(ans, f[i]);
    }
    cout << ans << endl;
    return 0;
}
