#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Input the number: ";
    cin>>number;
    start:
    if(number > 0)
    {
        cout<<number<<"\n";
        number--;
        goto start;
    }
    return 0;
}
