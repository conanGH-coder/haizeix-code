/*************************************************************************
	> File Name: 15.con_des_order.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat Mar 22 13:08:09 2025
 ************************************************************************/

#include <iostream>
using namespace std;

namespace test1 {

class A {
public :
    A(string name) : name(name) {
        cout << name << " constructor" << endl;
    }
    ~A() {
        cout << name << " destructor" << endl;
    }
    string name;
};

// 后构造的对象需要先析构，防止后构造的对象依赖于先构造的对象
class B {
public :
    B(A &a, string name) : a(a), name(name) {
        cout << name << " constructor" << endl;
        if (a.name == "c") {
            data = new int[10];
        } else {
            data = new int();
        }
    }
    ~B() {
        if (a.name == "c") {
            cout << name << " destructor int[]" << endl;
            delete[] data;
        } else {
            cout << name << " destructor int" << endl;
            delete data;
        }
    }
private:
    string name;
    A &a;
    int *data;
};


int main() {
    A c{"c"}, d{"d"};
    B a{c, "a"}, b{d, "b"};
    return 0;
}

}

class A {
public :
    A(string name) : name(name) {
        cout << name << " constructor" << endl;
    }
    ~A() {
        cout << name << " destructor" << endl;
    }
    string name;
};

// 后构造的对象需要先析构，防止后构造的对象依赖于先构造的对象
class B {
public :
    B(string name) : name(name), c(name + ".c"), d(name + ".d") {
        cout << name << " constructor" << endl;
    }
    ~B() {
        cout << name << " destructor" << endl;
    }
private:
    string name;
    A c, d;
};


int main() {
    B a{"a"};
    return 0;
}
