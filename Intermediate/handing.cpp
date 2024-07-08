#include <iostream>
#include<stdexcept>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() { 
        balance = 1000.0; // Initial balance of 1000 rupees
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited " << amount << " rupees. New balance: " << balance << " rupees." << endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn " << amount << " rupees. New balance: " << balance << " rupees." << endl;
        } else {
            throw "Insufficient funds!";
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;

    try {
        double depositAmount, withdrawAmount;

        cout << "Enter deposit amount: ";
        cin >> depositAmount;
        account.deposit(depositAmount);

        cout << "Enter amount to withdraw: ";
        cin >> withdrawAmount;
        account.withdraw(withdrawAmount);
    } catch (const char* message) {
        cout << "Exception caught: " << message << endl;
    }

    return 0;
}
