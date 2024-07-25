#include <iostream>
using namespace std;

int main()
{
    char emp_number[8];
    char emp_name[25];
    char emp_address[50];
    char emp_mobile[10];
    cout<<"\n Enter the Employee Number: ";
    cin>>emp_number;
    cout<<"\n Enter the Employee Name: ";
    cin.getline(emp_name, 25);
    cin.getline(emp_name, 25);
    cout<<"\n Enter the Employee Address: ";
    cin.getline(emp_address, 50);
    cout<<"\n Enter the Contact Number: ";
    cin>>emp_mobile;
    cout<<"\n Employee Number: "<<emp_number<<endl;
    cout<<"\n Employee Name: "<<emp_name<<endl;
    cout<<"\n Employee Address: "<<emp_address<<endl;
    cout<<"\n Employee Contact Number: "<<emp_mobile<<endl;
    return 0;
}
