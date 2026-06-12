#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    void getData() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;
    }

    void displayData() {
        cout << "\nStudent Details" << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s;

    s.getData();
    s.displayData();

    return 0;
}
