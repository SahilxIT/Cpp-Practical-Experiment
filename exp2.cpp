
#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;

protected:
    double balance;

public:
    string holderName;

    BankAccount(int acc, string name, double amount)
    {
        accountNumber = acc;
        holderName = name;
        balance = amount;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Amount Deposited: " << amount << endl;
    }

    void display()
    {
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nHolder Name: " << holderName;
        cout << "\nBalance: " << balance << endl;
    }
};

class SavingsAccount : public BankAccount
{
private:
    double interestRate;

public:
    SavingsAccount(int acc, string name, double amount, double rate)
        : BankAccount(acc, name, amount)
    {
        interestRate = rate;
    }

    void calculateInterest()
    {
        double interest = balance * interestRate / 100;
        balance += interest;

        cout << "Interest Added: " << interest << endl;
    }
};

int main()
{
    SavingsAccount s1(101, "Sahil", 10000, 5);

    s1.display();
    s1.deposit(2000);
    s1.calculateInterest();
    s1.display();

    return 0;
}
