/*************************************************************************
	> File Name: 4.P1427.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 27 Oct 2024 12:25:09 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 100
int a[MAX_N + 100];

void func(int i) {
    if (a[i] == 0) return ;
    func(i + 1);
    cout << a[i] << " ";
    return ;
}

int main() {
    int x, i = 0;
    do {
        scanf("%d", &x);
        a[i++] = x;
    } while (x);
    for (int k = i - 2; k >= 0; k--) {
        cout << a[k] << " ";
    }
    cout << endl;
    func(0);
    cout << endl;
    return 0;
}
