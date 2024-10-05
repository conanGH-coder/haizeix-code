/*************************************************************************
	> File Name: 12.XYOJ-9383.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Sep 2024 01:36:17 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

bool is_valid(int x) {
    while (x && x % 10 != 7) {
        x /= 10;
    }
    if (x % 10 == 7) return true;
    return false;
}

int main() {
    for (int i = 10; i <= 99; i++) {
        if (i != 10) cout << " ";
        if (!(i % 7) || is_valid(i)) cout << "pass!";
        else cout << i;
    }
    cout << endl;
    return 0;
}
