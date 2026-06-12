#include <iostream>
using namespace std;

class Demo {
private:
    int num;

public:
    Demo() {
        num = 100;
    }

    friend void show(Demo);
};

void show(Demo obj) {
    cout << "Value of num = " << obj.num << endl;
}

int main() {
    Demo d;
    show(d);

    return 0;
}
