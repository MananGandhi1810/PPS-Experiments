/*
Create a class named 'Employee' with a string (char array) variable 'name' and float  variable 'salary'.
Assign the value of salary  as 20000.67  and that of name as "Scott" in main( ) function by creating an object of the class Employee and display the same.
*/
#include <iostream>
using namespace std;

class Employee
{
    string name;
    float salary;

public:
    Employee(string n, float s)
    {
        name = n;
        salary = s;
    }
    void display();
};

void Employee::display()
{
    cout << "Name: " << name << endl
         << "Salary: " << salary << endl;
}

int main()
{
    Employee emp("Scott", 20000.67);
    emp.display();
    return 0;
}