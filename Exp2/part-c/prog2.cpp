// Implement a code to convert binary to decimal equivalent
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int binary = 0, decimal = 0;
    cout << "Enter binary number: ";
    cin >> binary;
    int count = 0;
    while (binary > 0)
    {
        if (binary % 10 == 1)
        {
            decimal += pow(2, count);
        }
        count++;
        binary /= 10;
    }
    cout << decimal << endl;
    return 0;
}