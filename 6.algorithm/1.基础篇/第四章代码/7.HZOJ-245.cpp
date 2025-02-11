/*************************************************************************
    > File Name: 7.HZOJ-245.cpp
    > Author: 
    > Mail: 
    > Created Time: Sun Feb  9 15:53:09 2025
 ************************************************************************/

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n, p = 0, ans = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    p = a[n / 2];
    for (int i = 0; i < n; i++) {
        ans += abs(p - a[i]); 
    }
    cout << ans << endl;
    return 0;
}
