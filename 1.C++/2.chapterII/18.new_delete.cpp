/*************************************************************************
	> File Name: 18.new_delete.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat Mar 22 13:43:35 2025
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A() = default;
    A(int ) : type("A(int )") {
        cout << type << " constructor" << endl;
    }
    A(double ) : type("A(double )") {
        cout << type << " constructor" << endl;
    }
    A(int, int) : type("A(int, int)") {
        cout << type << " constructor" << endl;
    }
    ~A() {
        cout << type << " destructor" << endl;
    }
    string type;
};

int main() {
    int *p1 = new int;
    int *p2 = new int(100);
    int *p3 = new int[100];
    int *p4 = new int();
    cout << p1 << " sizeof(p1) = " << sizeof(*p1) << endl;
    cout << p2 << " *p2 = " << *p2 << endl;
    for (int i = 0; i < 100; i++) p3[i] = i + 1;
    for (int i = 0; i < 100; i++) {
        cout << p3[i] << " ";
    }
    cout << endl;
    cout << p4 << " sizeof(p4) = " << sizeof(*p4) << endl;

    delete p1;
    delete p2;
    delete[] p3;
    delete p4;

    A *a1 = new A(123);
    A *a2 = new A(123.3);
    A *a3 = new A(123, 456);

    delete a1;
    delete a2;
    delete a3;

    A *a4 = new A[100];
    return 0;
}
