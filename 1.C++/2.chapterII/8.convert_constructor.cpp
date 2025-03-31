/*************************************************************************
	> File Name: 8.convert_constructor.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu Mar 20 01:24:36 2025
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    // 只有一个参数的有参构造称为转换构造
    A(int z) : x(z), y(z) {
        cout << this << " convert constructor" << endl;
    }
    void operator=(const A &a) {
        this->x = a.x;
        this->y = a.y;
        cout << this << " operator=" << endl;
        return ;
    }
    void output() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
private:
    int x, y;
};

int main() {
    A a(3), b{4}, c = 5;
    a.output();
    b.output();
    c.output();
    a = 4;
    a.output();
    return 0;
}
