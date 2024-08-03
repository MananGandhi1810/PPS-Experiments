/*
Finally a covid vaccine is out in the market and Mumbai Government has asked you to form a plan to distribute it to the public as soon as possible.
There are a total of n people with age a1, a2, a3, ... an.
There is only 1 hospital where vaccination is done and its only possible to vaccinate upto D people per day.
Anyone whose age is >= 80 or <= 9 is possible to be at risk.
On each day, you may not vaccinate both, a person who is at risk and a person who is not at risk.
Find the smallest number of days needed to vaccinate everyone.
*/
#include <iostream>

using namespace std;
int calculate(int[], int, int);
int main()
{
    int n = 0, D = 0;
    cout << "Enter number of patients: ";
    cin >> n;
    int a[n];
    cout << "Enter patient ages: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ": ";
        cin >> a[i];
    }
    cout << "Enter number of maximum vaccinations: ";
    cin >> D;
    cout << "Total number of days: " << calculate(a, n, D) << endl;
    return 0;
}

int calculate(int a[], int n, int D)
{
    int atRisk = 0, notAtRisk = 0, totalDays = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 80 || a[i] <= 9)
        {
            atRisk++;
        }
        else
        {
            notAtRisk++;
        }
    }
    totalDays = (atRisk / D) + (D % atRisk == 0 ? 0 : 1) + (notAtRisk / D) + (D % notAtRisk == 0 ? 0 : 1);
    return totalDays;
}