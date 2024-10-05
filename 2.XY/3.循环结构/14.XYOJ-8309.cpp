/*************************************************************************
	> File Name: 14.XYOJ-8309.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Sep 2024 11:51:07 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 0, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << a;
        int tmp = a;
        a += b;
        b = tmp;
    }
    cout << endl;
    return 0;
}
