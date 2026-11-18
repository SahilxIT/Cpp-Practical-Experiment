
#include <iostream>
#include <exception>
using namespace std;

// Base Custom Exception
class BankException : public exception
{
public:
    const char* what() const noexcept override
    {
        return "Bank Transaction Error";
    }
};

// Derived Exception
class InsufficientBalance : public BankException
{
public:
    const char* what() const noexcept override
    {
        return "Insufficient Balance!";
    }
};

class InvalidAmount : public BankException
{
public:
    const char* what() const noexcept override
    {
        return "Invalid Transaction Amount!";
    }
};

class BankAccount
{
private:
    double balance;

public:
    BankAccount(double amount)
    {
        balance = amount;
    }

    void deposit(double amount)
    {
        if (amount <= 0)
        {
            throw InvalidAmount();
        }

        balance += amount;

        cout << "Amount Deposited: " << amount << endl;
    }

    void withdraw(double amount)
    {
        if (amount <= 0)
        {
            throw InvalidAmount();
        }

        if (amount > balance)
        {
            throw InsufficientBalance();
        }

        balance -= amount;

        cout << "Amount Withdrawn: " << amount << endl;
    }

    void display()
    {
        cout << "Available Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account(10000);

    try
    {
        account.display();

        account.deposit(2000);

        account.withdraw(5000);

        account.withdraw(15000);
    }
    catch (const InvalidAmount& e)
    {
        cout << "Exception: " << e.what() << endl;
    }
    catch (const InsufficientBalance& e)
    {
        cout << "Exception: " << e.what() << endl;
    }
    catch (const BankException& e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    account.display();

    return 0;
}
