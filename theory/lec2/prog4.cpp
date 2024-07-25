/*
Rehaan went to gym today. He decided to do x sets of squats. Each set consists of 20 squats. He went to gym for n days. Find the total number of squats.
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

    int total = x * 20 * n;

    cout << "Total number of squats: " << total << endl;
    return 0;
}