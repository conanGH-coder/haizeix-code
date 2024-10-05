/*************************************************************************
	> File Name: 1.HZOJ-505.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 27 Sep 2024 10:22:00 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const string &a, const string &b) {
    return a + b > b + a;
}

int main() {
    int n;
    string str;
    cin >> n;
    vector<string> vec;
    for (int i = 0; i < n; i++) {
        cin >> str;
        vec.push_back(str);
    }
    sort(vec.begin(), vec.end(), cmp);
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i];
    }
    cout << endl;
    return 0;
}
