/*************************************************************************
	> File Name: 5.cin.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Mar 11 21:46:21 2025
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    cout << "a = " << a << endl;
    double b;
    char c[100];
    cin >> a >> b >> c;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    while (cin >> a) {
        cout << "EOF read : a = " << a << endl; 
    }
    return 0;
}
