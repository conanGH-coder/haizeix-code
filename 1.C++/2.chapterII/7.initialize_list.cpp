/*************************************************************************
	> File Name: 7.initialize_list.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu Mar 20 00:49:18 2025
 ************************************************************************/

#include <iostream>
using namespace std;

namespace test1 {
class A {
public :
    A() : A(0, 0) {}
    A(int x, int y) : x(x), y(y) {}
    void output() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
private:
    int x, y;
};

int main() {
    A a(3, 2), b(5, 6), c;
    a.output();
    b.output();
    c.output();
    return 0;
}
} // test1


namespace test2 {

class B {
public :
    B(int x) : x(x) {
        cout << this << " : Class B Constructor" << endl;
    }
    int x;
};

class A {
public :
    A() : A(0, 0) {}
    // 初始化参数列表的执行顺序是按照变量在类中
    // 定义的顺序来执行的
    //A(int z) : y(z), x(y + 1) {}
    A(int z) : y(z), x(z) {
        cout << "x : " << &x << endl;
        cout << "y : " << &y << endl;
    }
    A(int x, int y) : x(x), y(y) {}
    void output() {
        cout << "(" << x.x << ", " << y.x << ")" << endl;
    }
private:
    B x, y;
};


int main() {
    A a(5);
    a.output();
    return 0;
}

} // test2

namespace test3 {

class B {
public :
    B() {
        cout << this << " : default B constructor" << endl;
    }
    B(int x) : x(x) {
        cout << this << " : Class B constructor" << endl;
    }
    int x;
};

class A {
public :
    A() : A(0, 0) {}
    // 为什么使用初始化列表？
    // 大括号{}以内的都是已经构造好了的对象
    // 对于this->x是一个B类型的对象，如果要使用它，那么必须先构造
    // 而在B类没有默认构造函数时，程序无法调用其默认构造去构造它
    // 因此会报错
    A(int x, int y) {
        this->x.x = x;
        this->y.x = y;
    }
    void output() {
        cout << "(" << x.x << ", " << y.x << ")" << endl;
    }
private:
    B x, y;
};


int main() {
    A a(5, 6);
    a.output();
    return 0;
}

} // test3

int main() {
    // test1::main();
    // test2::main();
    test3::main();
    return 0;
}
