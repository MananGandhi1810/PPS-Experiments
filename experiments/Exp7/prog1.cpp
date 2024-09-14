// Write a function that takes one integer parameter as a year, and displays its leap year or not
#include <iostream>
using namespace std;
bool isLeap(int);

int main()
{
    int year;
    cout << "Enter year: ";
    cin >> year;
    if (isLeap(year))
    {
        cout << "Leap";
    }
    else
    {
        cout << "Not leap";
    }
    cout << endl;
    return 0;
}

bool isLeap(int year)
{
    return (year % 4 == 0) && !(year % 100 == 0 && year % 400 != 0);
}