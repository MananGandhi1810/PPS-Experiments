#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 1;
    cout<<"Input the number: ";
    cin>>n;
    start:
    if(i <= 10)
    {
        cout<<n<<" x "<<i<<" = "<<n*i<<"\n";
        i++;
        goto start;
    }
    return 0;
}
