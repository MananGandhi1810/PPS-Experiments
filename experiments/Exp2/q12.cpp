// Write a program to calculate compound interest.
#include <iostream>

using namespace std;
int main()
{
    double p, r, t, amount, interest;
    cout << "Enter principal: ";
    cin >> p;
    cout << "Enter rate of interest: ";
    cin >> r;
    cout << "Enter time in years: ";
    cin >> t;
    amount = p * pow((1 + (r / 100)), t);
    interest = amount - p;
    cout << "Compound Interest: " << interest << endl;
    cout << "Amount: " << amount << endl;
    return 0;
}