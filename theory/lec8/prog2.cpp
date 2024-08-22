// Write a menu driven program to compute minimum, maximum and average of numbers taken from the user in an array. There will be 3 functions, minimum, maximum and average.
#include <iostream>

using namespace std;
class Calculations
{
private:
    int n;
    float arr[500];

public:
    void input();
    float minimum();
    float maximum();
    float average();
};

void Calculations::input()
{
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

float Calculations::minimum()
{
    float min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

float Calculations::maximum()
{
    float max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

float Calculations::average()
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}

int main()
{
    int n = 0;
    cout << "Enter number of users: ";
    cin >> n;
    Calculations calcs[n];
    for (int i = 0; i < n; i++)
    {
        calcs[i].input();
    }
    bool running = true;
    while (running)
    {
        int choice = 0;
        int userNumber = 0;
        cout << "Enter user number: ";
        cin >> userNumber;
        userNumber--;
        if (userNumber >= n || userNumber < 0)
        {
            cout << "Wrong number";
            continue;
        }
        cout << "0. Exit" << endl;
        cout << "1. Minimum" << endl;
        cout << "2. Maximum" << endl;
        cout << "3. Average" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Minimum: " << calcs[userNumber].minimum() << endl;
            break;
        case 2:
            cout << "Maximum: " << calcs[userNumber].maximum() << endl;
            break;
        case 3:
            cout << "Average: " << calcs[userNumber].average() << endl;
            break;
        case 0:
            running = false;
            break;
        default:
            break;
        }
    }
    return 0;
}