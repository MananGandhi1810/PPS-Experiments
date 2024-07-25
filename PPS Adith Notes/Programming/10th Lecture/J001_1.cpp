#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "\n\n";
    for(int i = 0; i < row; i++) {
        for(int x = 1; x <= 10; x++) {
            cout << setw((row/10) + 2) << (x + (i * 10)) << " ";
        }
        cout << endl;
    }
    return 0;
}
