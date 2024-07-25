#include<iostream>
using namespace std;
int main()
{
    float temp;
    cout<<"Enter the temperature in fahrenheit\n";
    cin>>temp;
    if(temp>=60 && temp<=65)
    {
        cout<<"Go play Cricket";
    }
    else if(temp>=65 && temp<=70)
    {
        cout<<"Go for indoor games";
    }
    else if(temp>70)
    {
        cout<<"It is too hot";
    }
    else
    {
        cout<<"It is chilling";
    }
    return 0;
}
