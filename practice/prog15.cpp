#include <iostream>
using namespace std;

class User
{
    string name;
    int age;

public:
    User()
    {
        name = "";
        age = 0;
    }
    User(string n, int a)
    {
        name = n;
        age = a;
    }
    User(User &u)
    {
        name = u.name;
        age = u.age;
    }
    void display();
};

void User::display()
{
    cout << "Name: " << name << endl
         << "Age: " << age << endl;
}

int main()
{
    User u1;
    User u2("Manan", 10);
    User u3(u2);
    u1.display();
    u2.display();
    u3.display();
    return 0;
}