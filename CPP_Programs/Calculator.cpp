#include <iostream>
using namespace std;

class Calculator {
public:
    void add(float a, float b) {
        cout << "Addition = " << a + b << endl;
    }

    void subtract(float a, float b) {
        cout << "Subtraction = " << a - b << endl;
    }

    void multiply(float a, float b) {
        cout << "Multiplication = " << a * b << endl;
    }

    void divide(float a, float b) {
        if (b != 0)
            cout << "Division = " << a / b << endl;
        else
            cout << "Division by zero is not possible!" << endl;
    }
};

int main() {
    Calculator c;
    float x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    c.add(x, y);
    c.subtract(x, y);
    c.multiply(x, y);
    c.divide(x, y);

    return 0;
}
