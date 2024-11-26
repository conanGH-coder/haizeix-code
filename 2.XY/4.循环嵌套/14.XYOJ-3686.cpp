/*************************************************************************
    > File Name: 14.XYOJ-3686.cpp
    > Author: 
    > Mail: 
    > Created Time: 2024/11/17 10:20:00
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) cout << "*";
    cout << endl;
    for (int i = 0; i < m - 2; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0 || j == n - 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) cout << "*";
    cout << endl;
    cout << 2 * n + 2 * (m - 2) << endl;
    return 0;
}
