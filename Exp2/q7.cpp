// Write a program to convert temperature in Celsius to Fahrenheit.
#include <iostream>

using namespace std;
int main()
{
    int celsius = 0, fahrenheit = 0;
    cout << "Enter tempterature in Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9/5) + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    return 0;
}