#include <iostream>
using namespace std;

int main() {
    int Y;
    cout << "Enter the year: ";
    cin >> Y;
    if((Y % 4 == 0 && Y % 100 != 0) || Y % 400 == 0) {
        cout << "\nLeap Year\n";
    }
    else{
        cout << "\nNot a Leap Year\n";
    }
    return 0;
}
