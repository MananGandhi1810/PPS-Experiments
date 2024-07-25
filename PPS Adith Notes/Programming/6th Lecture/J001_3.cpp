#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    if(N % 2 == 0 && N % 3 == 0 && N % 5 != 0) {
        cout << "\nNumber is perfect.\n";
    }
    else{
        cout << "\nNumber is not perfect.\n";
    }
    return 0;
}
