#include <iostream>
using namespace std;

int main()
{
    int x,y,z,a,b;
    cout<<"\nEnter the value of x: ";
    cin>>x;
    cout<<"\nEnter the value of y: ";
    cin>>y;
    cout<<"\nEnter the value of z: ";
    cin>>z;
    a = (x*x)+(2*x*x*x)*(2*x);
    b = x+(y*y)+(z*z*z);
    cout<<"\na = "<<a<<"\nb = "<<b;
    return 0;
}
