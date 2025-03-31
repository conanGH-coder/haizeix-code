/*************************************************************************
	> File Name: 13.HZOJ-172.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Mar 12 08:26:17 2025
 ************************************************************************/

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<string> s;
    string name;
    for (int i = 0; i < 10; i++) {
        cin >> name;
        s.insert(name);
    }
    for (auto x : s) {
        cout << x << endl;
    }
    return 0;
}
