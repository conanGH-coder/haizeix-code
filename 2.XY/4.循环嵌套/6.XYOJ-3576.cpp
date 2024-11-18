/*************************************************************************
	> File Name: 6.XYOJ-3576.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Sep 2024 03:33:32 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < 3 * n; i++) {
        // 打印O
        if (i % 3 == 0) {
            int local = 3 * n - i - 1;
            for (int k = 1; k <= 3 * n - 1 + i; k++) {
                if (k == local) {
                    cout << "O";
                    local += 6;
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
        // 打印"/|\"
        else if (i % 3 == 1) {
            int local1 = 3 * n - i;
            for (int j = 1; j <= 3 * n - 1 + i; j++) {
                if (j == local1 - 1) cout << "/";
                else if (j == local1) cout << "|";
                else if (j == local1 + 1) {
                    cout << "\\";
                    local1 += 6;
                }
                else cout << " ";
            }
            cout << endl;
        }
        // 打印"/\"
        else {
            int local2 = 3 * n - i + 1;
            for (int j = 1; j <= 3 * n - 1 + i; j++) {
                if (j == local2 - 1) cout << "/";
                else if (j == local2 + 1) {
                    cout << "\\";
                    local2 += 6;
                }
                else cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
