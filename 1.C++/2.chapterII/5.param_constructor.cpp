/*************************************************************************
	> File Name: 5.param_constructor.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Mar 12 09:31:31 2025
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    // 委托构造：将初始化参数直接交给有参构造函数去做
    A() : A(100, 10000) {}
    A(int x, int y) {
        this->x = x; this->y = y;
    }
    void output() {
        cout << "(" << this->x << ", " << this->y << ")" << endl;
    }
private:
    int x, y;
};

int main() {
    A a(10, 100), b(20, 200);
    a.output(); b.output();
    A c;
    c.output();
    return 0;
}
