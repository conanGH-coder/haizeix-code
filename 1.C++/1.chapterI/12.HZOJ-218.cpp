/*************************************************************************
	> File Name: 12.HZOJ-218.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Mar 12 08:09:56 2025
 ************************************************************************/

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, vector<int>> h;
    for (int i = 1, a; i <= n; i++) {
        cin >> a;
        h[a].push_back(i);
    }
    int flag = 0;
    for (auto x : h) {
        for (auto y : x.second) {
            if (flag) cout << " ";
            cout << y;
            flag = 1;
        }
    }
    cout << endl;
    return 0;
}
