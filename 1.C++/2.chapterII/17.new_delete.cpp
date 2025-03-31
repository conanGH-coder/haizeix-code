/*************************************************************************
	> File Name: 17.new_delete.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat Mar 22 13:38:28 2025
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A(string msg) {
        cout << msg << " constructor" << endl;
    }
    ~A() {
        cout << "destructor" << endl;
    }
};

int main() {
    // malloc只开辟空间，不会调用构造和析构，new和delete会
    A *malloc_a = (A *)malloc(sizeof(A));
    free(malloc_a);
    A *new_a = new A("new");
    delete new_a;
    return 0;
}
