/*************************************************************************
	> File Name: 1.HZOJ-505.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Mar 18 13:28:35 2025
 ************************************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    vector<string> arr;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        arr.push_back(str);
    }
    sort(arr.begin(), arr.end(), [&](string a, string b) -> bool{
            return a + b > b + a;   
        });
    string ans = "";
    for (auto x : arr) {
        ans += x;
    }
    cout << ans << endl;
    return 0;
}
