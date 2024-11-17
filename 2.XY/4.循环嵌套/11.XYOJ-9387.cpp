/*************************************************************************
    > File Name: 11.XYOJ-9387.cpp
    > Author: 
    > Mail: 
    > Created Time: 2024/11/15 20:57:24
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 0; i <= m; i++) {
        if (i * (m - i) == n) {
            cout << "yes" << endl;
            return 0;
        }
    }
    cout << "no" << endl;
    return 0;
}
