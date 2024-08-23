// Container with max area
#include <iostream>

using namespace std;
int main()
{
    int n = 0;
    cout << "Enter n: ";
    cin >> n;
    int height[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> height[i];
    }
    int left = 0, right = n - 1;
    int maxArea = 0;
    while (left < right)
    {
        int area =
            (right - left) *
            (height[left] < height[right] ? height[left] : height[right]);
        if (area > maxArea)
        {
            maxArea = area;
        }
        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    cout << "Max Area: " << maxArea << endl;
    return 0;
}