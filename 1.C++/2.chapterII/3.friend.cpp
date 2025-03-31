/*************************************************************************
	> File Name: 3.friend.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Mar 12 08:36:15 2025
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    void output() {
        cout << "x = " << x << " y = " << y << endl;
    }
private:
    int x, y;
    friend int main();
    friend class B;
};

class B {
public :
    void change(A &a) {
        a.x = 100; a.y = 200;
        return ;
    }
};

void test(A &a) {
    //a.x = 12; a.y = 15;
    return ;
}

int main() {
    A a;
    test(a);
    a.x = 12; a.y = 15;
    a.output();
    B b;
    b.change(a);
    a.output();
    return 0;
}
