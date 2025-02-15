/*************************************************************************
    > File Name: 6.HZOJ-372.cpp
    > Author: 
    > Mail: 
    > Created Time: Sun Feb 16 00:01:06 2025
 ************************************************************************/

#include <deque>
#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    deque<int> aq, bq;
    int p;
    for (p = 0; p < n; p++) {
        while (!aq.empty() && a[aq.back()] > a[p]) aq.pop_back();
        while (!bq.empty() && b[bq.back()] > b[p]) bq.pop_back();
        aq.push_back(p);
        bq.push_back(p);
        if (aq.size() != bq.size()) break;
    }
    cout << p << endl;
    return 0;
}
