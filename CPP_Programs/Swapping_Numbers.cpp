#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before Swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    swap(&x, &y);

    cout << "After Swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
