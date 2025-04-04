/*************************************************************************
    > File Name: 5.HZOJ-40.cpp
    > Author: 
    > Mail: 
    > Created Time: Tue Feb  4 18:04:20 2025
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
#define MAX_N 500

class BigInt : public vector<int> {
public:
    BigInt() { push_back(0); }
    BigInt(int x) { push_back(x); processed_digit(); }
    void processed_digit() {
        for (int i = 0; i < size(); i++) {
            if (at(i) < 10) continue;
            if (i == size() - 1) push_back(0);
            at(i + 1) += at(i) / 10;
            at(i) %= 10;
        }
        return ;
    }
    BigInt &operator+=(const BigInt &a) {
        for (int i = 0; i < a.size(); i++) {
            if (i >= size()) push_back(a[i]);
            else at(i) += a[i];
        }
        processed_digit();
        return *this;
    }
    BigInt operator+(const BigInt &a) {
        BigInt ret(*this);
        ret += a;
        return ret;
    }
};

ostream &operator<<(ostream &out, const BigInt &a) {
    for (int i = a.size() - 1; i >= 0; i--) {
        out << a[i];
    }
    return out;
}

BigInt f[MAX_N + 5];

int main() {
    int n;
    cin >> n;
    f[0] = 1;
    f[1] = 0;
    f[2] = 1;
    for (int i = 3; i <= n; i++) {
        f[i] = f[i - 2] + f[i - 3];
    }
    cout << f[n] << endl;
    return 0;
}
