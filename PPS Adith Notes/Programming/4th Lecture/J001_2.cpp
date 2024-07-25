#include <iostream>
#include <cmath>

using namespace std;
int main() {
    double ax, ay, bx, by, distance, midpointX, midpointY;
    cout << "Input the coordinates of A: ";
    cin >> ax >> ay;
    cout << "Input the coordinates of B: ";
    cin >> bx >> by;

    distance = ceil((sqrt(pow((bx - ax), 2.0) + pow((by - ay), 2.0))) * 100) / 100;
    midpointX = ceil((ax + bx / 2) * 100.0) / 100.0;
    midpointY = ceil((ay + by / 2) * 100.0) / 100.0;

    cout << "\nDistance: " << distance << endl;
    cout << "\nMidpoint: (" << midpointX << ", " << midpointY << ")\n";

    return 0;
}