#include <iostream>
using namespace std;

class Demo {
public:
    void add(int a, int b) {
        cout << "Sum of Integers = " << a + b << endl;
    }

    void add(float a, float b) {
        cout << "Sum of Floats = " << a + b << endl;
    }
};

int main() {
    Demo obj;

    obj.add(10, 20);
    obj.add(10.5f, 20.5f);

    return 0;
}
