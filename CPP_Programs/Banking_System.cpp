#include <iostream>
using namespace std;

class BankAccount {
private:
    int accNo;
    string name;
    float balance;

public:
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accNo;

        cout << "Enter Account Holder Name: ";
        cin >> name;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit() {
        float amount;
        cout << "Enter Deposit Amount: ";
        cin >> amount;

        balance += amount;
        cout << "Amount Deposited Successfully!" << endl;
    }

    void withdraw() {
        float amount;
        cout << "Enter Withdrawal Amount: ";
        cin >> amount;

        if (amount <= balance) {
            balance -= amount;
            cout << "Amount Withdrawn Successfully!" << endl;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void display() {
        cout << "\n----- Account Details -----" << endl;
        cout << "Account Number : " << accNo << endl;
        cout << "Account Holder : " << name << endl;
        cout << "Balance         : " << balance << endl;
    }
};

int main() {
    BankAccount obj;
    int choice;

    obj.createAccount();

    do {
        cout << "\n1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Display Account Details" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                obj.deposit();
                break;

            case 2:
                obj.withdraw();
                break;

            case 3:
                obj.display();
                break;

            case 4:
                cout << "Thank You!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
