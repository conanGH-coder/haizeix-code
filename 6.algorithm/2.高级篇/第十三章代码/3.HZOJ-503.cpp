/*************************************************************************
	> File Name: 3.HZOJ-503.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Mar 18 16:41:57 2025
 ************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int w, n;
    cin >> w >> n;
    vector<int> arr;
    for (int i = 0, a; i < n; i++) {
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    int i = 0, j = arr.size() - 1, cnt = 0;
    while (i < j) {
        if (arr[i] + arr[j] <= w) {
            i++, j--;
        } else j--;
        cnt += 1;
    }
    if (i == j) cnt += 1;
    cout << cnt << endl;
    return 0;
}
