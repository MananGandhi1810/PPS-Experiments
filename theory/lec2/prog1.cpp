/*
No play and eating all day makes your belly fat.
This happened to Krish during the lockdown.
His weight before the lockdown was w1 kg (hospital machine) and after M months of lockdonw, when he measured his weight at home, he weight was w2 kg ( w2 > w1).
Scientific research shows that for growing kids by a value between x1 and x2 inclusive per month. Krish assumes that he is a growing kid.
Tell him whether his home scale could be giving correct results or not
*/
#include <iostream>

using namespace std;
int main()
{
    int w1, w2, x1, x2, n;
    cout << "Enter number of months: ";
    cin >> n;
    cout << "Enter initial weight in kg: ";
    cin >> w1;
    cout << "Enter final weight in kg: ";
    cin >> w2;
    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter x2: ";
    cin >> x2;

    int minWeightChange = w1 + (x1 * n);
    int maxWeightChange = w1 + (x2 * n);

    if (w2 < minWeightChange || w2 > maxWeightChange)
    {
        cout << "Invalid weight change" << endl;
    }
    else
    {
        cout << "Valid weight change" << endl;
    }
    return 0;
}