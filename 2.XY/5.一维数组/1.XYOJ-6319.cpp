/*************************************************************************
    > File Name: 1.XYOJ-6319.cpp
    > Author: 
    > Mail: 
    > Created Time: Thu Nov 28 11:04:41 2024
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0, a; i < n; i++) {
        cin >> a;
        arr.push_back(a);
    }
    int target, flag = 1;
    cin >> target;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << i << endl;
            flag = 0;
            break;
        }
    }
    if (flag) cout << -1 << endl;
    return 0;
}
