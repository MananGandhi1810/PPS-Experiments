/*
The Jethalal Scholarship Contest has just finished and you finished with a rank r.
You know that rank 1 to rank 50 will get full scholarship and rank 51 to 100 will get 50% scholarship.
Rest will not get any scholarship frmo Jethalal Champaklal Gada.
What percentage of scholarship will you get if the fees is 5,00,000
*/
#include <iostream>

using namespace std;
int main()
{
    unsigned int fees = 500000, r = 0;
    cout << "Enter rank: ";
    cin >> r;
    if (r <= 50 && r >= 1)
    {
        cout << "Percentage: 100%" << endl;
        cout << "Scholarship: " << fees << endl;
    }
    else if (r < 100)
    {
        cout << "Percentage: 50%" << endl;
        cout << "Scholarship: " << fees / 2 << endl;
    }
    else
    {
        cout << "No Scholarship" << endl;
    }
    return 0;
}