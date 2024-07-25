#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 1;
    int sum = 0;
    cout<<"Input the value of n: ";
    cin>>n;
    start:
    if(i <= n)
    {
        sum = sum + (i*i);
        i++;
        goto start;
    }
    cout<<"Sum: "<<sum;
    return 0;
}
