/*************************************************************************
	> File Name: 11.deep_copy.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Mar 21 17:17:42 2025
 ************************************************************************/

#include <iostream>
using namespace std;

// 浅拷贝：无脑赋值
// 深拷贝：真正的拷贝
class Array {
public :
    Array() : n(10), data(new int[n]) {
        for (int i = 0; i < n; i++) {
            data[i] = 0;
        }
    }
    // 添加自定义拷贝构造函数，将默认的浅拷贝改成深拷贝
    Array(const Array &a) : n(a.n), data(new int[n]) {
        cout << this << " : copy constructor" << endl;
        for (int i = 0; i < a.n; i++) {
            data[i] = a.data[i];
        }
    }
    Array(Array &&a) : n(a.n), data(a.data) {
        cout << this << " : move constructor" << endl;
        a.n = 0;
        a.data = nullptr;
    }
    void set(int ind, int val) { data[ind] = val; }
    int size() { return n;  }
    void output() {
        for (int i = 0; i < n; i++) {
            if (i) cout << " ";
            cout << data[i];
        }
        cout << endl;
        return ;
    }
    Array duplicate() {
        return Array(*this);
    }
private:
    int n, *data;
};

int main() {
    Array a, b = a.duplicate();
    cout << "a : " << &a << endl;
    cout << "b : " << &b << endl;
    return 0;
}
