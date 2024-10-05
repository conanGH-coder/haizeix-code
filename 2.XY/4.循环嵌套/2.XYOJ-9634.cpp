/*************************************************************************
	> File Name: 2.XYOJ-9634.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Sep 2024 02:33:52 PM CST
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m;
    cin >> m;
    for (int i = 0; i < 2 * m - 1; i++) {
        for (int j = 0; j < m - 1 - abs(m - 1 - i); j++) cout << " ";
        for (int k = 0; k < 2 * abs(m - 1 - i) + 1; k++) cout << abs(m - 1 - i) + 1;
        cout << endl;
    }
    return 0;
}
