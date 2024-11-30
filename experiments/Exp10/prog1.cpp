/*
Class “Employee” has data members: Emp_id, Emp_name and Emp_sal and this class uses a parameterized
constructor to accept the details of 2 employees and display the results using the display () function.
*/
#include <iostream>
using namespace std;

class Employee
{
    int emp_id;
    string emp_name;
    float emp_sal;

public:
    Employee()
    {
        emp_id = 0;
        emp_name = "";
        emp_sal = 0;
    }
    Employee(int i, string n, float s)
    {
        emp_id = i;
        emp_name = n;
        emp_sal = s;
    }
    void display();
};

void Employee::display()
{
    cout << "Id: " << emp_id << endl
         << "Name: " << emp_name << endl
         << "Salary:" << emp_sal << endl;
}

int main()
{
    int i;
    string n;
    float s;
    cout << "Employee 1: " << endl;
    cout << "Enter id: ";
    cin >> i;
    cout << "Enter name: ";
    cin >> n;
    cout << "Enter salary: ";
    cin >> s;
    Employee e1(i, n, s);
    cout << "Employee 2: " << endl;
    cout << "Enter id: ";
    cin >> i;
    cout << "Enter name: ";
    cin >> n;
    cout << "Enter salary: ";
    cin >> s;
    Employee e2(i, n, s);
    e1.display();
    e2.display();
    return 0;
}