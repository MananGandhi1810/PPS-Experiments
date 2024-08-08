// Write a program to test whether a given character is a capital or small letter and change small letters to capital letters and vice versa.
#include <iostream>

using namespace std;
int main()
{
    char letter = 'a';
    cout << "Enter character: ";
    cin >> letter;
    if ((int)letter >= 65 && (int)letter <= 90)
    {
        cout << "Capital Character" << endl;
    }
    else if ((int)letter >= 97 && (int)letter <= 122)
    {
        cout << "Small Character" << endl;
    }
    else
    {
        cout << "Invalid Character" << endl;
    }
    return 0;
}