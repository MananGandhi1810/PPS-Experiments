#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 5; i++) {
        for(int x = 1; x <= i; x++) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
