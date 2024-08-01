/*
There are n citizens in Narnia. It it election time in Narnia. There are 3 parties A, B, C.
Party A receives xa votes, Party votes yb, party c receives zc votes.
The constitution of Narnia requires a particular party to receive a clear majority to form a government.
A party is said to have a clear majority if it receives strictly greater than 50 votes.
If any party has a clear majority, print "the winning party is <Name of party>" otherwise print "King and Queen's Rule"
*/

/*
Test Data Preparation
Normal Data - Accepted: 0, 5000, 1000000
Extreme Data - Upper and Lower Limits: 0, 1000000
Boundary Data - Accepted and Rejected: -1, 0, 1000000, 1000001
Abnnormal Data - Rejected: a, @
*/
#include <iostream>

using namespace std;
int main()
{
    float n, xa, yb, zc;
    cout << "Enter number of voters: ";
    cin >> n;
    cout << "Enter xa: ";
    cin >> xa;
    cout << "Enter yb: ";
    cin >> yb;
    cout << "Enter zc: ";
    cin >> zc;
    if (xa > yb && xa > zc && xa > 0.5 * n)
    {
        cout << "The winner is Party A";
    }
    else if (yb > xa && yb > zc && yb > 0.5 * n)
    {
        cout << "The winner is Party B";
    }
    else if (zc > xa && zc > yb && zc > 0.5 * n)
    {
        cout << "The winner is Party C";
    }
    else
    {
        cout << "King and Queen's Rule";
    }
    cout << endl;
    return 0;
}