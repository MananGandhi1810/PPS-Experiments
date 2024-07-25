#include <iostream>

using namespace std;
int main() {
    int number, remainder, sum = 0, choice, temp;
    cout << "Enter your Choice ";
    cout << "\n1. To enter a number";
    cout << "\n2. To use default values\n\n";
    cin >> choice;
    switch (choice) {
    case 1:
        cout << "\nEnter a Number: ";
        cin >> number;
        temp = number;
        while (temp > 0) {
            remainder = temp % 10;
            sum = sum * 10 + remainder;
            temp = temp / 10;
        }
        if (sum == number) {
            cout << "\n" << number << " is a Palindrome Number" << endl;
        } else {
            cout << "\n" << number << " is not a Palindrome Number" << endl;
        }
        break;
    case 2:
        number = 121;
        temp = number;
        while (temp > 0) {
            remainder = temp % 10;
            sum = sum * 10 + remainder;
            temp = temp / 10;
        }
        if (sum == number) {
            cout << "\n" << number << " is a Palindrome Number" << endl;
        } else {
            cout << "\n" << number << " is not a Palindrome Number" << endl;
        }
        break;
    default:
        cout << "\n" << choice << " is not a valid option!" << endl;
        break;
    }
    return 0;
}