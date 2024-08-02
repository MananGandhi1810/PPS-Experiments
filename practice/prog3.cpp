#include <iostream>

using namespace std;
int main()
{
    char s[100];
    int vowels = 0, consonants = 0, spaces = 0, special = 0;
    int i = 0;
    std::cout << "Enter a string: ";
    cin.getline(s, 100);
    while (s[i] != '\0')
    {
        switch (s[i])
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            vowels++;
            break;
        case ' ':
            spaces++;
            break;
        case '@':
        case '$':
        case '#':
        case '!':
        case '.':
        case ',':
        case '?':
            special++;
            break;
        default:
            consonants++;
            break;
        }
        i++;
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Special Characters: " << special << endl;
}