*#include <iostream>
using namespace std;

class BankAccount {
protected:
    string accountHolder;
    double balance;

public:
    BankAccount(string name, double bal) {
        accountHolder = name;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void display() {
        cout << "Holder: " << accountHolder
             << "\nBalance: " << balance << endl;
    }
};

class SavingsAccount : public BankAccount {
public:
    SavingsAccount(string name, double bal)
        : BankAccount(name, bal) {}
};

int main() {
    SavingsAccount acc("Anurag", 10000);
    acc.deposit(2000);
    acc.display();
}*
