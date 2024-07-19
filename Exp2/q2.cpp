// Write a program to read your details like age, name, gender, city, height etc and display it.
#include <iostream>

using namespace std;
int main()
{
    unsigned short int age = 0;
    char name[25] = "";
    char gender[10] = "";
    char city[25] = "";
    unsigned int height = 100;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter gender: ";
    cin >> gender;
    cout << "Enter city: ";
    cin >> city;
    cout << "Enter height: ";
    cin >> height;
    cout << "Age: " << age << " Years" << endl;
    cout << "Name: " << name << endl;
    cout << "Gender: " << gender << endl;
    cout << "City: " << city << endl;
    cout << "Height: " << height << "cm" << endl;
    return 0;
}