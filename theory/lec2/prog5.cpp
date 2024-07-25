/*
In Jurassic Park, everyone who earns strictly more than y rs per year has to pay tax to Sohaan. Sohaan has allowed a special scheme where you can invest any amount of money and claim exemption for it. You have earned x rs this year. Find the minimum amount of money you have to invest so that you don't have to pay tax this year.
x > y
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
    int minimumInvestment = x - y;
    cout << "Minimum investment: " << minimumInvestment << endl;
    return 0;
}