/*
Write a C++ program that asks the user to enter positive integers in order to process count, maximum, minimum, and average or terminate the process with -1.
*/
#include <iostream>

using namespace std;
int main()
{
    float count = 0, max = 0, min = -1, sum = 0;
    while (true)
    {
        float n;
        cout << "Enter a number: ";
        cin >> n;
        if (n == -1)
        {
            break;
        }
        count++;
        if (n > max)
        {
            max = n;
        }
        if (n < min || min == -1)
        {
            min = n;
        }
        sum += n;
    }
    cout << "Count: " << count << endl;
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;
    cout << "Average: " << sum / count << endl;
    return 0;
}