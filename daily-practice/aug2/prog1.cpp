/*
Sonu went to the gym today. He decided to do X sets of squats. Each set consists of 15 squats. Determine the total number of squats that he did in N days of a week.
*/
#include <iostream>

using namespace std;
int main()
{
    int x, n;
    cout << "Enter number of sets: ";
    cin >> x;
    cout << "Enter number of days: ";
    cin >> n;

    int total = x * 15 * n;

    cout << "Total number of squats: " << total << endl;
    return 0;
}