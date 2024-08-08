// Using a switch case, write a program to check whether the entered character is a vowel or consonant
#include <iostream>

using namespace std;
int main()
{
    char letter = 'a';
    cout << "Enter a letter: ";
    cin >> letter;
    if (!((int)letter >= 65 && (int)letter <= 90) || !((int)letter >= 97 && (int)letter <= 122))
    {
        cout << "Not an alphabet";
    }
    else
    {
        switch (letter)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "Vowel" << endl;
            break;

        default:
            cout << "Consonant" << endl;
            break;
        }
    }
}