/*************************************************************************
    > File Name: 6.HZOJ-287.cpp
    > Author: 
    > Mail: 
    > Created Time: Sun Feb  9 15:14:51 2025
 ************************************************************************/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

long long func(vector<long long> &a) {
    priority_queue<long long, vector<long long>, greater<long long>> pq(a.begin(), a.end());
    long long ans = 0;
    for (long long i = 1; i <= a.size() - 1; i++) {
        long long min1 = pq.top();
        pq.pop();
        long long min2 = pq.top();
        pq.pop();
        ans += (min1 + min2);
        pq.push(min1 + min2);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<long long> a(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << func(a) << endl;
    return 0;
}
