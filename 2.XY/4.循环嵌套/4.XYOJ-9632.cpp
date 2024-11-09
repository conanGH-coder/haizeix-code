/*************************************************************************
	> File Name: 4.XYOJ-9632.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Sep 2024 03:18:17 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;
    for (int i = 0; i < 2 * m + 1; i++) {
        for (int j = 0; j < 2 * m + 1; j++) {
            if (j == i || j == 2 * m - i) cout << "x";
            else cout << "o";
        }
        cout << endl;
    }
    return 0;
}
