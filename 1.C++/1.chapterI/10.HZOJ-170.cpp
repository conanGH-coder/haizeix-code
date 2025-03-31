/*************************************************************************
	> File Name: 10.HZOJ-170.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Mar 11 22:47:31 2025
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, pos;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        pos = 0;
        cin >> str;
        while ((pos = str.find("Ban_smoking", pos)) != -1) {
            str.replace(pos, 3, "No");     
        }
        cout << str << endl;
    }
    return 0;
}
