// Check if a string is a palindrome
#include <iostream>

using namespace std;
bool isPalindrome(string str)
{
    int len = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        len++;
        i++;
    }
    int left = 0, right = len - 1;
    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    bool res = isPalindrome(str);
    if (res)
    {
        cout << str << " is a palindrome" << endl;
    }
    else
    {
        cout << str << " is not a palindrome" << endl;
    }
    return 0;
}