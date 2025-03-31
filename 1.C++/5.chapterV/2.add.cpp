/*************************************************************************
	> File Name: 2.add.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Mar 19 16:09:36 2025
 ************************************************************************/

#include <iostream>
#include <sstream>
using namespace std;
#define P(func) { \
    cout << #func << "=" << func << endl; \
}

template<typename T>
T add(T a, T b) {
    return a + b;
}

//template<typename T, typename U>
//T add(T a, U b) {
    //return a + b;
//}

//template<typename T, typename U>
//// 匿名变量的默认构造函数进行自动类型推导
//decltype(T() + U()) add(T a, U b) {
    //return a + b;
//}

// 返回值后置
template<typename T, typename U>
auto add(T a, U b) -> decltype(a + b) {
    return a + b;
}

void is_type(int a) {
    cout << "a is type of int" << endl;
}

void is_type(double a) {
    cout << "a is type of double" << endl;
}

class A {
public :
    A(int x) : x(x) {}
    int x;
};

class B {
public :
    B(double x = 0) : x(x) {}
    double x;
};

string operator+(const A &a, const B &b) {
    ostringstream ss;
    ss << a.x << "," << b.x;
    return ss.str();
}

int main() {
    P(add<double>(3.4, 6));
    P(add(3.4, 6));
    P(add(6, 3.4));
    decltype(6 + 3.5) a;
    is_type(a);
    A a1(9);
    B a2(3.4);
    P(add(a1, a2));
    return 0;
}
