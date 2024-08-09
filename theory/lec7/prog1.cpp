#include <iostream>

using namespace std;
int main()
{
    unsigned int n;
    int number = 0;
    unsigned int pos_index = 0, neg_index = 0, zero_index = 0;
    cout << "Enter number of numbers: ";
    cin >> n;
    int pos[n], neg[n], zeros[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> number;
        if (number > 0)
        {
            pos[pos_index] = number;
            pos_index++;
        }
        else if (number < 0)
        {
            neg[neg_index] = number;
            neg_index++;
        }
        else
        {
            zeros[zero_index] = number;
            zero_index++;
        }
    }
    cout << "Positive numbers (" << pos_index << "): ";
    for (int i = 0; i < pos_index; i++)
    {
        cout << pos[i] << "\t";
    }
    cout << endl
         << "Negative numbers (" << neg_index << "): ";
    for (int i = 0; i < neg_index; i++)
    {
        cout << neg[i] << "\t";
    }
    cout << endl
         << "Zeros (" << zero_index << "): ";
    for (int i = 0; i < zero_index; i++)
    {
        cout << zeros[i] << "\t";
    }
    cout << endl;
    return 0;
}