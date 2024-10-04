/*
Create a class Employee having data members name, salary & department and define two member function getData( ) & showData( ) for taking input & display the same.
Write a complete C++ code for displaying the information of a Employee.
*/
#include <iostream>
using namespace std;

class Employee
{
    string name;
    float salary;

public:
    void getData();
    void showData();
};

void Employee::getData()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter salary: ";
    cin >> salary;
}

void Employee::showData()
{
    cout << "Name: " << name << endl
         << "Salary: " << salary << endl;
}

int main()
{
    Employee emp;
    emp.getData();
    emp.showData();
    return 0;
}