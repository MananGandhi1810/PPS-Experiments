#include <iostream>
using namespace std;

class Person
{
protected:
    char name[100];

public:
    Person()
    {
        name[0] = '\0';
    }
};

class Customer : private Person
{
private:
    int length;

public:
    Customer(const int l = 10)
    {
        length = l;
    }
    void print();
    void setPasswordLength();
    void checkPassword();
};

void Customer::print()
{
    cout << "Length: " << length << endl;
}

void Customer::setPasswordLength()
{
    cout << "Enter password length: ";
    cin >> length;
}

void Customer::checkPassword()
{
}

class Company
{
protected:
    float profit;

public:
    Company()
    {
        profit = 0;
    }
    ~Company() {}
    void getProfit();
    void showProfit();
};

void Company::getProfit()
{
    cout << "Enter the profit value: ";
    cin >> profit;
}

void Company::showProfit()
{
    cout << "Profit: " << profit << endl;
}

class Bank : private Company, private BankAccount
{
public:
    Bank() {}
    void addAccount();
};

class BankAccount
{
protected:
    float total;

public:
    BankAccount()
    {
        total = 0;
    }
    void deposit();
    void getAmount();
};

void BankAccount::deposit()
{
    
}

void BankAccount::getAmount()
{
    cout << "Enter amount: ";
    cin >> total;
}

int main()
{
    Person p;
}