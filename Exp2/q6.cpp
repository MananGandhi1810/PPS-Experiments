// Write a program to calculate simple interest
#include <iostream>

using namespace std;
int main()
{
    double p = 0, r = 7, t = 2;
    float interest = 0, amount = 0;
    cout << "Enter principal: ";
    cin >> p;
    cout << "Enter rate of interest: ";
    cin >> r;
    cout << "Enter time in years: ";
    cin >> t;
    interest = p * r * t / 100;
    amount = interest + p;
    cout << "Simple Interest: " << interest << endl;
    cout << "Total Amount: " << amount << endl;
    return 0;
}