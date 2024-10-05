/*************************************************************************
	> File Name: 1.class_object.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 13 Sep 2024 12:43:16 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Cat {};
class Dog {};
class People {
public :
    string name;
    int age;

    void say() {
        cout << "My name is " << name << endl;
        cout << "My age is " << age << endl;
        return ;
    }
};

int main() {
    Cat garfiled;
    Dog odie1, odie2;
    People hug, song;

    hug.name = "Captain Hu";
    hug.age = 50;
    hug.say();
    song.name = "Captain Song";
    song.age = 32;
    song.say();
    return 0;
}
