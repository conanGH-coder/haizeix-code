/*************************************************************************
    > File Name: 3.P1255.cpp
    > Author: 
    > Mail: 
    > Created Time: Thu Feb  6 21:05:54 2025
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
#define MAX_N 5000

class BigInt : public vector<int> {
public:
    BigInt() { push_back(0); }
    BigInt(int x) { push_back(x); process_digit(); }
    BigInt &operator+=(const BigInt &a) {
        for (int i = 0; i < a.size(); i++) {
            if (i > size() - 1) push_back(a[i]);
            else at(i) += a[i];
        }
        process_digit();
        return *this;
    }
    BigInt operator+(const BigInt &a) {
        BigInt ret(*this);
        ret += a;
        return ret;
    }
private:
    void process_digit() {
        for (int i = 0; i < size(); i++) {
            if (at(i) < 10) continue;
            if (i + 1 == size()) push_back(0);
            at(i + 1) += at(i) / 10;
            at(i) %= 10;
        }
        return ;
    }
};

BigInt f[MAX_N + 5];

ostream &operator<<(ostream &out, const BigInt &a) {
    for (int i = a.size() - 1; i >= 0; i--) {
        out << a[i];
    }
    return out;
}

int main() {
    int n;
    cin >> n;
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    cout << f[n] << endl;
    return 0;
}
