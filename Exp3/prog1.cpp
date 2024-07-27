/*
Develop a program that accepts sales amount;
if the sales amount is more than 5000, then the discount is 12% of the sales amount;
otherwise, it is 7%—display the total discount and amount to be paid after the discount.
*/
#include <iostream>

using namespace std;
int main()
{
    float amount = 0, discount = 0, final_amount = 0;
    cout << "Enter amount: ";
    cin >> amount;
    if (amount > 5000)
    {
        discount = 12;
    }
    else
    {
        discount = 7;
    }
    final_amount = amount - (amount * (discount / 100));
    cout << "Discount: " << discount << "%" << endl;
    cout << "Final amount: " << final_amount << endl;
    return 0;
}