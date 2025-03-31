/*************************************************************************
	> File Name: 14.BigInt.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Mar 12 01:34:28 2025
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
#define MAX_N 500

class BigInt : public vector<int> {
public :
    BigInt(int x = 0) { 
        push_back(x);
        process_digit();
    }
    BigInt &operator+=(const BigInt &a) {
        for (int i = 0; i < a.size(); i++) {
            if (i >= size()) push_back(a[i]);
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
    f[0] = 1; f[1] = 0; f[2] = 1;
    for (int i = 3; i <= n; i++) {
        f[i] = f[i - 2] + f[i - 3];
    }
    cout << f[n] << endl;
    return 0;
}
