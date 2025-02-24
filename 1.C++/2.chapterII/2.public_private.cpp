/*************************************************************************
	> File Name: 2.public_private.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Feb 24 18:49:32 2025
 ************************************************************************/

#include <iostream>
using namespace std;

class People {

public:
    string name1;
    int age1;
    
    void say1() {
        cout << "say1 : My name is " << name1 << ", " << age1 << " years old." << endl;
        return ;
    }

private:
    string name2;
    int age2;

public:
    void say2() {
        cout << "say2 : My name is " << name1 << ", " << age1 << " years old." << endl;
        return ;
    }

};

int main() {
    People hug;
    hug.name1 = "Captain Hu";
    hug.age1  = 50;
    hug.say1();
    hug.say2();
    return 0;
}
