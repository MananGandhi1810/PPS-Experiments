/*
There are 50 computers in an office. Every computer has following information CPU type, hard disk size. WAP to store details of all 50 computers and then print details of computers having hard disk size greater than 8 GB.
*/

#include <iostream>
using namespace std;

struct computer
{
    string cpu_type;
    int hard_disk_size;
};

int main()
{
    struct computer c[50];
    int i;
    for (i = 0; i < 50; i++)
    {
        cout << "Enter the CPU type: ";
        cin >> c[i].cpu_type;
        cout << "Enter the hard disk size: ";
        cin >> c[i].hard_disk_size;
    }
    cout << endl
         << "Computers with hard disk size greater than 8 GB are: ";
    for (i = 0; i < 50; i++)
    {
        if (c[i].hard_disk_size > 8)
        {
            cout << c[i].cpu_type << endl;
        }
    }
    return 0;
}