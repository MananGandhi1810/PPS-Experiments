// Define structure Employee having data members: emp no, name, address, dept and salary. WAP to read and display information of a employee.
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
    Employee emp;
    cout << "Enter Employee Number: ";
    cin >> emp.empNo;
    cout << "Enter Employee Name: ";
    fflush(stdin);
    getline(cin, emp.name);
    cout << "Enter Employee Address: ";
    getline(cin, emp.address);
    cout << "Enter Employee Department: ";
    cin >> emp.dept;
    cout << "Enter Employee Salary: ";
    cin >> emp.salary;
    cout << "Emp Number: " << emp.empNo << endl
         << "Name: " << emp.name << endl
         << "Address: " << emp.address << endl
         << "Department: " << emp.dept << endl
         << "Salary: " << emp.salary << endl;
    return 0;
}