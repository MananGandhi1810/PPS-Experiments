/*
Define a class to represent a beank account including:
* Name of the depositor
* Accout number
* Type of account
* Balance amount

Member functions:
* To assign initial values
* To deposit an account
* To withdraw an amount after checking the balance
* To display name and balance
*/

#include <iostream>
using namespace std;

class Account
{
private:
    string name;
    unsigned int account_num;
    string type;
    long long int balance;

public:
    void getData();
    void deposit(int);
    void withdraw(int);
    void display();
};

void Account::getData()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter account number: ";
    cin >> account_num;
    cout << "Enter account type: ";
    cin >> type;
    cout << "Enter existing balance: ";
    cin >> balance;
}

void Account::deposit(int amount)
{
    balance += amount;
    cout << "Amount deposited succesfully" << endl;
}

void Account::withdraw(int amount)
{
    if (amount < balance)
    {
        cout << "Insufficient balance" << endl;
        return;
    }
    balance -= amount;
    cout << "Amount withdrawn succesfully" << endl;
}

void Account::display()
{
    cout << "Name: " << name << endl;
    cout << "Account Number: " << account_num << endl;
    cout << "Accout Type: " << type << endl;
    cout << "Balance: " << balance << endl;
}

int main()
{
    int n = 0;
    cout << "Enter number of users: ";
    cin >> n;
    Account accounts[n];
    cout << "Enter details: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Account " << i + 1 << endl;
        accounts[i].getData();
    }
    int choice, amount;
    for (int i = 0; i < n; i++)
    {
        cout << "Account " << i + 1 << endl;
        cout << "Enter amount: ";
        cin >> amount;
        cout << "Enter 1 to deposit and 2 to withdraw: ";
        cin >> choice;
        if (choice == 1)
        {
            accounts[i].deposit(amount);
        }
        else if (choice == 2)
        {
            accounts[i].withdraw(amount);
        }
        else
        {
            cout << "Invalid input" << endl;
        }
    }
    cout << "Accounts: " << endl;
    for (int i = 0; i < n; i++)
    {
        accounts[i].display();
    }
    return 0;
}