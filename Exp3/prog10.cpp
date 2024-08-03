/*
Write a program to calculate the Goods and Services Tax (GST) for a given amount based on the GST rate. The program shoudl be able to handle different rates and provide a clear breakdown of the total amount, GST amount, the amount before GST. Your program shoudl accept the original price of the item and the GST rate. The rate can be a whole number or a decimal. Constraint - THe original price should be a positive number and the GDST rate shoult be a non-negative number and can be a decimal ranfing from 0% to 28%.
*/
#include <iostream>

using namespace std;
int main()
{
    double original = 0, total = 0;
    double tax = 0;
    cout << "Enter original price: ";
    cin >> original;
    cout << "Enter GST rate: ";
    cin >> tax;
    if (original < 0)
    {
        cout << "Invalid original price" << endl;
    }
    else if (tax < 0 || tax > 28)
    {
        cout << "Invalid Tax" << endl;
    }
    else
    {
        total = original + (original * (tax / 100));
        cout << "Original Amount: " << original << endl;
        cout << "GST Rate: " << tax << endl;
        cout << "Total Amount: " << total << endl;
    }
    return 0;
}