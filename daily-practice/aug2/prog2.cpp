/*
In Fantasyland, everyone who earns strictly more than Y rupees per year has to pay a tax to Sam. Sam has allowed a special scheme where you can invest any amount of money and claim an exemption for it. You have earned X (X>Y) rupees this year. Find the minimum amount of money you have to invest so that you don't have to pay taxes this year.
*/
#include <iostream>

using namespace std;
int main()
{
    int x, y;
    cout << "Enter x in rs: ";
    cin >> x;
    cout << "Enter y in rs: ";
    cin >> y;
    if (x <= y)
    {
        cout << "No Investment Needed" << endl;
    }
    else
    {
        int minimumInvestment = x - y;
        cout << "Minimum investment: " << minimumInvestment << endl;
    }
    return 0;
}