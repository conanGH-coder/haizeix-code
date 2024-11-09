/*************************************************************************
	> File Name: 17.XYOJ-7273.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Sep 2024 12:39:03 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;


int main() {
    int x;
    cin >> x;
    while (x != 1) {
        if (x & 1) {
            cout << x << "*3+1=";
            x = x * 3 + 1;
            cout << x << endl;
        }
        else {
            cout << x << "/2=";
            x /= 2;
            cout << x << endl;
        }
    }
    cout << "End" << endl;
    return 0;
}
