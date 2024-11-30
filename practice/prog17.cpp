#include <iostream>
using namespace std;

class Person
{
protected:
    char[100] name;
};

class Customer : private Person
{
};

class Company
{
protected:
    float profits;

public:
    float getProfits();
};