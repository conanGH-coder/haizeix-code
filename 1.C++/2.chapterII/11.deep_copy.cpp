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
        for (int i = 0; i < a.n; i++) {
            data[i] = a.data[i];
        }
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
private:
    int n, *data;
};

int main() {
    Array a, b = a;
    for (int i = 0; i < a.size(); i++) {
        a.set(i, 1);
    }
    for (int i = 0; i < b.size(); i++) {
        b.set(i, i);
    }
    a.output();
    b.output();
    a.set(5, 1001);
    a.output();
    b.output();
    return 0;
}
