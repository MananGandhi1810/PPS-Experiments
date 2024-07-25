#include <iostream>
using namespace std;

int main()
{
    int r,fees;
    cout<<"\nEnter Rank: ";
    cin>>r;
    if(r>0 && r<=50){
        fees = 0;
    }
    else if(r>50 && r<=100){
        fees = 1750;
    }
    else{
        fees = 3500;
    }
    cout<<"\nFees: "<<fees<<endl;
    return 0;
}
