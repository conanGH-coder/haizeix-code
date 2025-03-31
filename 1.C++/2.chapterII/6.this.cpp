/*************************************************************************
	> File Name: 6.this.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu Mar 20 00:14:39 2025
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A() : A(0, 0) {
        cout << this << " : default constructor" << endl;
    }
    A(int x, int y) {
        cout << this << " : param constructor" << endl;
        this->x = x, this->y = y;
    }
    void output() {
        cout << this << " : function call" << endl;
        cout << this->x << " " << this->y << endl;
    }
private:
    int x, y;
};

int main() {
    A a{10, 100}, b;
    cout << "a : " << &a << endl;
    cout << "b : " << &b << endl;
    a.output();
    b.output();
    a.output();
    return 0;
}
