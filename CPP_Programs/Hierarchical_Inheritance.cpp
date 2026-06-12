#include <iostream>
using namespace std;

class Shape {
   public:
    void display() {
        cout << "This is a shape." << endl;
    }
};

class Rectangle : public Shape {
   public:
    void area() {
        cout << "Area of Rectangle" << endl;
    }
};

class Circle : public Shape {
   public:
    void perimeter() {
        cout << "Perimeter of Circle" << endl;
    }
};

int main() {
    Rectangle rect;
    Circle circ;

    rect.display();
    rect.area();

    circ.display();
    circ.perimeter();

    return 0;
}
