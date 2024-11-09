/*************************************************************************
	> File Name: 20.XYOJ-9376.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Sep 2024 12:47:36 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    double h;
    cin >> h;
    double total = 0;
    for (int i = 1; i <= 10; i++) {
        if (i == 1) total += h;
        else total += h * 2.0;
        h /= 2.0;
    }
    cout << total << endl;
    cout << h << endl;
    return 0;
}
