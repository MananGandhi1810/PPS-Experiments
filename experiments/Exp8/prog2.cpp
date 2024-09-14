/*
Define structure called Employee that will describe the following data emp no, name,
address, dept and salary. Develop a program that store information of 10 employees
and display names of the employees having salary greater than 50000.
*/
#include <iostream>
using namespace std;

struct Employee
{
    int empNo;
    string name;
    string address;
    string dept;
    float salary;
};

int main()
{
    Employee emp[10];
    for (int i = 0; i < 10; i++)
    {
        cout << endl
             << "Employee " << i + 1 << ": " << endl;
        cout << "Enter Employee Number: ";
        cin >> emp[i].empNo;
        cout << "Enter Employee Name: ";
        getline(cin, emp[i].name);
        cout << "Enter Employee Address: ";
        getline(cin, emp[i].address);
        cout << "Enter Employee Department: ";
        cin >> emp[i].dept;
        cout << "Enter Employee Salary: ";
        cin >> emp[i].salary;
        fflush(stdin);
    }
    for (int i = 0; i < 10; i++)
    {
        if (emp[i].salary > 50000)
        {
            cout << "Emp Number: " << emp[i].empNo << endl;
        }
    }
    return 0;
}