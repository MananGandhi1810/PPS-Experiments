// UPI System
#include <iostream>

using namespace std;

class User
{
private:
    string name;
    float balance;
    string upiId;
    long int phoneNumber;
    int pin;

public:
    void getData();
    bool send(float amount, int p);
    bool receive(float amount);
    bool findByUpiId(string u);
    void displayBalance();
};

void User::getData()
{
    fflush(stdin);
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter balance: ";
    cin >> balance;
    cout << "Enter UPI id: ";
    cin >> upiId;
    cout << "Enter phone number: ";
    cin >> phoneNumber;
    cout << "Enter pin: ";
    cin >> pin;
}

bool User::send(float amount, int p)
{
    if (pin != p)
    {
        return false;
    }
    if (amount > balance)
    {
        return false;
    }
    balance -= amount;
    return true;
}

bool User::receive(float amount)
{
    balance += amount;
    return true;
}

bool User::findByUpiId(string u)
{
    return upiId == u;
}

void User::displayBalance()
{
    cout << "Balance: " << balance << endl;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    User users[n];
    for (int i = 0; i < n; i++)
    {
        users[i].getData();
    }
    string sender;
    string receiver;
    float amount;
    bool sent;
    int senderIndex, receiverIndex;
    int choice;
    int pin;
    string upiId;
    int userIndex;
    while (true)
    {
        cout << "Do you want to continue? 1 - Transfer, 2 - Check Balance, 3 - Exit: ";
        cin >> choice;
        if (choice == 1)
        {

            fflush(stdin);
            cout << "Enter Sender UPI ID: ";
            cin >> sender;
            cout << "Enter Receiver UPI ID: ";
            cin >> receiver;
            cout << "Enter amount: ";
            cin >> amount;
            senderIndex = -1;
            for (int i = 0; i < n; i++)
            {
                if (users[i].findByUpiId(sender))
                {
                    senderIndex = i;
                    break;
                }
            }
            receiverIndex = -1;
            for (int i = 0; i < n; i++)
            {
                if (users[i].findByUpiId(receiver))
                {
                    receiverIndex = i;
                    break;
                }
            }
            if (senderIndex == -1 || receiverIndex == -1)
            {
                cout << "UPI ID not found" << endl;
                continue;
            }
            cout << "Enter pin: ";
            cin >> pin;
            sent = users[senderIndex].send(amount, pin);
            if (!sent)
            {
                cout << "Could not send amount" << endl;
            }
            else
            {
                users[receiverIndex].receive(amount);
                cout << "Amount transferred" << endl;
            }
        }
        else if (choice == 2)
        {
            cout << "Enter UPI Id: ";
            cin >> upiId;
            userIndex = -1;
            for (int i = 0; i < n; i++)
            {
                if (users[i].findByUpiId(upiId))
                {
                    userIndex = i;
                    break;
                }
            }
            if (userIndex == -1)
            {
                cout << "UPI ID not found" << endl;
                continue;
            }
            users[userIndex].displayBalance();
        }
        else if (choice == 3)
        {
            cout << "Exiting";
            break;
        }
    }
    return 0;
}