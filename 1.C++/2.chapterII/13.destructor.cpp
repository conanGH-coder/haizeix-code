/*************************************************************************
	> File Name: 13.destructor.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Mar 21 18:43:18 2025
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A() : x(0), y(0) {
        cout << this << " : default constructor" << endl;
    }
    ~A() {
        cout << this << " : destructor" << endl;
    }
private:
    int x, y;
};

int main() {
    A a;
    A *pa = new A();
    delete pa;
    return 0;
}
