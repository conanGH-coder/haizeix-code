/*************************************************************************
	> File Name: 1.class_object.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Feb 24 13:26:24 2025
 ************************************************************************/

#include <iostream>
using namespace std;

class Cat {
public:
    void say() {
        cout << "My name is " << this->name << endl;
        return ;
    }
private:
    string name;
};

class Dog {};

class People {
public:
    string name;
    int age;

    void say() {
        cout << "My name is " << this->name << ", " << age << " years old" << endl;
        return ;
    }
};

int main() {
    Cat garfiled;
    Dog odie1, odie2;
    People hug, song;

    hug.name = "Captain Hu";
    hug.age  = 50;
    hug.say();

    song.name = "Captain Song";
    song.age  = 32;
    song.say();
    return 0;
}
