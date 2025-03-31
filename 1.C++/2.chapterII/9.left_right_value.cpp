/*************************************************************************
	> File Name: 9.left_right_value.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu Mar 20 11:20:11 2025
 ************************************************************************/

#include <iostream>
using namespace std;
#define TEST(expr) { \
    cout << #expr; \
    f(expr); \
}

void g(int &x) {
    cout << "g : is left value" << endl;
    return ;
}

void g(int &&x) {
    cout << "g : is right value" << endl;
    return ;
}

// 一个&符的是左值引用:优先绑定到左值(可以被赋值的是左值)
void f(int &x) {
    cout << " is left value" << endl;
    g(x);
    return ;
}

// 两个&符的是右值引用:优先绑定到右值(字面量就是右值)
void f(int &&x) {
    cout << " is right value" << endl;
    g(std::move(x));
    g(std::forward<int &&>(x));
    return ;
}

// 为了让右值可以绑定到左值引用上，就需要保证左值引用不可被修改
// 因为右值是字面量，也是不可以被修改的，所以只要保证了左值引用
// 不能被修改，则可以解决绑定上的逻辑冲突
void test(const int &x) {
    cout << "test function call" << endl;
    return ;
}

int main() {
    // 匿名变量是右值
    int a = 12, b = 13;
    TEST(123); // right
    TEST(12 + 3); // right
    TEST(a + b); // right
    TEST(a); // left
    TEST(b); // left
    // a++本质上是将a的值先存储在一个匿名变量中
    // 然后将a的值+1后返回匿名变量，所以是右值
    // ++a本质是将a的值+1后直接返回，所以是左值
    TEST(a++); // right
    TEST(++a); // left
    ++a = 1001;
    cout << a << endl;
    test(12 + 24);
    return 0;
}
