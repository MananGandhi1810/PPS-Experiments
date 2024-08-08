/*
Anukampa decided to buy a new tablet.
His budget is B, so he cannot buy a tablet whose price is greater than B.
Other than that, he only has one criterion — the area of the tablet's screen should be as large as possible.
Of course, the screen of a tablet is always a rectangle.
Anukampa has visited some tablet shops and listed all of his options.
In total, there are N available tablets, numbered 1 through N.
For each valid i, the i-th tablet has width Wi, height Hi and price Pi.
Help Anukampa choose a tablet which he should buy and find the area of such a tablet's screen, or determine that he cannot buy any tablet.
Diplay "No tablet" if he cannot buy any tablet.
*/
#include <iostream>

using namespace std;
int main()
{
    int n = 0, b = 0, max_area = 0, best_tablet = 0;
    cout << "Enter budget: ";
    cin >> b;
    cout << "Enter number of tablets: ";
    cin >> n;
    int w[n], h[n], p[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter width, height and price of tablet " << i + 1 << ": ";
        cin >> w[i] >> h[i] >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (p[i] <= b)
        {
            int area = w[i] * h[i];
            if (area > max_area)
            {
                max_area = area;
                best_tablet = i + 1;
            }
        }
    }
    if (max_area == 0)
    {
        cout << "No tablet" << endl;
    }
    else
    {
        cout << "The best tablet is tablet " << best_tablet << " with an area of " << max_area << endl;
    }
}