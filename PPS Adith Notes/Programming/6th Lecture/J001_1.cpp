#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter an integer: ";
    cin >> N;
    if(N % 2 == 1) {
        cout << "\nWeird\n";
    }
    else if(N>=2 && N<=5){
        cout << "\nNot Weird\n";
    }
    else if(N>=6 && N<=20){
        cout << "\nWeird\n";
    }
    else{
        cout << "\nNot Weird\n";
    }
    return 0;
}
