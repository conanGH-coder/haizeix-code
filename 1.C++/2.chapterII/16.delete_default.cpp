/*************************************************************************
	> File Name: 16.delete_default.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat Mar 22 13:31:50 2025
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A() = default; // 保留
    A(int x) {}
    A(const A &) = delete; // 删除
    ~A() = default;
};

int main() {
    // delete和default起提示作用
    A a;
    return 0;
}
