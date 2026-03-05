#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:

    // Setter methods
    void setAccountNumber(int acc)
    {
        accountNumber = acc;
    }

    void setAccountHolderName(string name)
    {
        accountHolderName = name;
    }

    void setBalance(double b)
    {
        balance = b;
    }

    // Getter methods
    int getAccountNumber()
    {
        return accountNumber;
    }

    string getAccountHolderName()
    {
        return accountHolderName;
    }

    double getBalance()
    {
        return balance;
    }

    // Deposit method
    void deposit(double amount)
    {
        balance = balance + amount;
        cout << "Amount deposited successfully\n";
    }

    // Withdraw method
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdrawal successful\n";
        }
        else
        {
            cout << "Insufficient balance\n";
        }
    }

    // Display account details
    void displayAccountDetails()
    {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount acc;
    int choice;
    int accNo;
    string name;
    double balance, amount;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Account Holder Name: ";
    cin >> name;

    cout << "Enter Initial Balance: ";
    cin >> balance;

    acc.setAccountNumber(accNo);
    acc.setAccountHolderName(name);
    acc.setBalance(balance);

    do
    {
        cout << "\n1. Deposit Money";
        cout << "\n2. Withdraw Money";
        cout << "\n3. Display Account Details";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter deposit amount: ";
            cin >> amount;
            acc.deposit(amount);
            break;

        case 2:
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            acc.withdraw(amount);
            break;

        case 3:
            acc.displayAccountDetails();
            break;

        case 4:
            cout << "Exiting program";
            break;

        default:
            cout << "Invalid choice";
        }

    } while (choice != 4);

    return 0;
}