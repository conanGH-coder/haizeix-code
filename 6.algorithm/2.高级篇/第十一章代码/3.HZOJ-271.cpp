/*************************************************************************
    > File Name: 3.HZOJ-271.cpp
    > Author: 
    > Mail: 
    > Created Time: Sat Feb 15 02:49:29 2025
 ************************************************************************/

#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr;
    deque<int> q;
    for (int i = 0, a; i < n; i++) {
        cin >> a;
        arr.push_back(a);
    }
    for (int i = 0; i < n; i++) {
        while (!q.empty() && arr[q.back()] > arr[i]) q.pop_back();
        q.push_back(i);
        if (i - q.front() >= k) q.pop_front();
        if (i + 1 < k) continue;
        if (i >= k) cout << " ";
        cout << arr[q.front()];
    }
    cout << endl;
    q.clear();
    for (int i = 0; i < n; i++) {
        while (!q.empty() && arr[q.back()] < arr[i]) q.pop_back();
        q.push_back(i);
        if (i - q.front() >= k) q.pop_front();
        if (i + 1 < k) continue;
        if (i >= k) cout << " ";
        cout << arr[q.front()];
    }
    cout << endl;
    return 0;
}
