/*************************************************************************
	> File Name: 9.HZOJ-167.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Mar 11 22:41:31 2025
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    string a, b;
    cin >> a >> n >> b;
    cout << a.size() << endl;
    cout << a.find('a') + 1 << endl;
    cout << a.insert(n - 1, b) << endl;
    return 0;
}
