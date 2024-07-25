#include <iostream>
using namespace std;

int main()
{
    for(int i = 5; i >= 1; i--) {
        for(int x = i; x >= 1; x--) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
