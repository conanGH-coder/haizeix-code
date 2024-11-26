/*************************************************************************
    > File Name: 10.XYOJ-8454.cpp
    > Author: 
    > Mail: 
    > Created Time: 2024/11/15 18:23:35
 ************************************************************************/

#include <iostream>
using namespace std;

void print_result(int x) {
    int cnt = 0;
    for (int i = 2; i <= x; i++) {
        if (x % i == 0) {
            cnt += 1;
            while (x % i == 0) x /= i;
        }
    }
    cout << cnt << endl;
}

int main() {
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        print_result(x);
    }
    return 0;
}
