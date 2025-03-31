/*************************************************************************
	> File Name: 8.HZOJ-166.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Mar 11 22:26:45 2025
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    string a, b;
    int n;
    cin >> a >> n >> b;
    cout << (a.size() > 100 ? 100 : a.size()) << endl;
    string c = a.insert(n - 1, b);
    cout << c << endl;
    cout << c.size() - c.rfind('x') << endl;;
    return 0;
}
