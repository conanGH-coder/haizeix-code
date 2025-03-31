/*************************************************************************
	> File Name: 4.default_constructor.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Mar 12 09:06:13 2025
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A() {
        cout << "default constructor" << endl;
        x = 123; y = 456;
    }
    void output() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
private:
    int x, y;
};

int main() {
    A a;
    a.output();
    // 显示调用默认构造函数的正确方法
    A b{};
    b.output();
    //// 有歧义，可能被视为函数声明
    //A b();
    //b();
    return 0;
}

//A b() {
    //cout << "function b" << endl;
    //return A();
//}
