#include <iostream>
using namespace std;

class Vehicle {
   public:
    void vehicleType() {
        cout << "This is a transport vehicle." << endl;
    }
};

class FourWheeler : public Vehicle {
   public:
    void wheels() {
        cout << "It has 4 wheels." << endl;
    }
};

class Car : public FourWheeler {
   public:
    void brand() {
        cout << "Brand: SUV Custom" << endl;
    }
};

int main() {
    Car myCar;
    myCar.brand();
    myCar.wheels();
    myCar.vehicleType();
    return 0;
}
