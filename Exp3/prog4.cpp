/*
Develop a program to perform divisibility tests by 3 and 5.
If the entered number is divisible by three and not by five print “THREE”;
if the number is divisible by five and not by three print “FIVE”; if divisible by both 3 & 5 print “BOTH” otherwise, print “NOT”
*/
#include <iostream>

using namespace std;
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 3 == 0 && number % 5 == 0)
    {
        cout << "BOTH" << endl;
    }
    else if (number % 3 == 0)
    {
        cout << "THREE" << endl;
    }
    else if (number % 5 == 0)
    {
        cout << "FIVE" << endl;
    }
    else
    {
        cout << "NOT" << endl;
    }
    return 0;
}