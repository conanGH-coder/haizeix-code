/*************************************************************************
	> File Name: 10.copy_constructor.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Mar 21 16:44:37 2025
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A() : x(0), y(1) {
        cout << this << " : default constructor" << endl;
    }
    // 为什么加引用：防止无限展开拷贝构造
    // 为什么加const：既可以传入const也可以传入非const
    A(const A &a) : x(a.x), y(a.y) {
        cout << this << " : copy constructor" << endl;
    }
    void operator=(const A &a) {
        cout << this << " : operator=" << endl;
    }
    void output() {
        cout << "(" << x << ", " << y << ")" << endl;
        return ;
    }
private:
    int x, y;
};

int main() {
    A a, b = a;
    b = a;
    cout << "a : " << &a << endl;
    cout << "b : " << &b << endl;
    a.output();
    b.output();
    return 0;
}
