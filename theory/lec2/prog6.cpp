/*
Janani visited her doctor today. She was advised to drink atleast 2000ml of water everyday. She drank x ml of water today. Find whether she followed the doctor's advice of not
*/

#include <iostream>

using namespace std;
int main()
{
    int x, y;
    cout << "Enter x in ml: ";
    cin >> x;
    if (x < 2000)
    {
        cout << "Advise not followed" << endl;
    }
    else
    {
        cout << "Advise followed" << endl;
    }
    return 0;
}