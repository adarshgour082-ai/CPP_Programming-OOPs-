#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived Class
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Animal *ptr;
    Dog d;

    ptr = &d;
    ptr->sound();

    return 0;
}
