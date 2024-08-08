// Write a program to initialize your details like age, name, gender, city, height etc and display it. (for name & city use character array ex. char name [20])
#include <iostream>

using namespace std;
int main()
{
    char name[25] = "Manan";
    char city[25] = "Mumbai";
    unsigned short int age = 17;
    char gender[10] = "Male";
    unsigned int height = 180;
    cout << "Age: " << age << " Years" << endl;
    cout << "Name: " << name << endl;
    cout << "Gender: " << gender << endl;
    cout << "City: " << city << endl;
    cout << "Height: " << height << "cm" << endl;
    return 0;
}