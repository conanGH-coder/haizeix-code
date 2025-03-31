/*************************************************************************
	> File Name: 2.HZOJ-284.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun Mar 23 14:10:03 2025
 ************************************************************************/

#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
using namespace std;

struct Data {
    Data(int p, int d) : p(p), d(d) {}
    int p, d;
};

typedef pair<int, int> PII;

int main() {
    int n;
    cin >> n;
    vector<Data> arr;
    for (int i = 0, p, d; i < n; i++) {
        cin >> p >> d;
        arr.push_back(Data(p, d));
    }
    sort(arr.begin(), arr.end(), [&](const Data &a, const Data &b) -> bool {
            if (a.d != b.d) return a.d < b.d;
            return a.p > b.p;
        });
    //for (int i = 0; i < n; i++) {
        //cout << i << " : " << "(" << arr[i].p << ", " << arr[i].d << ")" << endl;
    //}
    set<PII> s;
    for (int i = 0; i < n; i++) {
        if (arr[i].d > s.size()) s.insert({arr[i].p, i});
        else {
            PII now = *s.begin();
            if (now.first < arr[i].p) {
                s.erase(s.begin());
                s.insert({arr[i].p, i});
            }
        }
    }
    int ans = 0;
    for (auto x : s) {
        ans += x.first;
    }
    cout << ans << endl;
    return 0;
}
