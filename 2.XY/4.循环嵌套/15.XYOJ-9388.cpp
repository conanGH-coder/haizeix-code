/*************************************************************************
    > File Name: 15.XYOJ-9388.cpp
    > Author: 
    > Mail: 
    > Created Time: 2024/11/17 10:33:50
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, flag = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((1 + i) * i / 2 - 3 * j == n) {
                cout << j << " " << i << endl;
                flag = 1;
                break;
            }
        }
        if (flag) break;
    }
    return 0;
}
