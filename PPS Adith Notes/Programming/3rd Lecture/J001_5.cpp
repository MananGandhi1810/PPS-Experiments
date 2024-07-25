#include <iostream>
using namespace std;

int main()
{
    int num_1,num_2;
    cout<<"\nEnter Number 1: ";
    cin>>num_1;
    cout<<"\nEnter Number 2: ";
    cin>>num_2;
    cout<<"\n\nBefore Swapping \nNumber 1: "<<num_1<<"\nNumber 2: "<<num_2<<endl;
    num_1 = num_1+num_2;
    num_2 = num_1-num_2;
    num_1 = num_1-num_2;
    cout<<"\nAfter Swapping \nNumber 1: "<<num_1<<"\nNumber 2: "<<num_2<<endl;
    return 0;
}
