#include <iostream>
using namespace std;

int main()
{
    char rollno[8];
    float msub1,msub2,msub3,msub4,msub5,msum,score;
    cout<<"\nEnter Roll No: ";
    cin>>rollno;
    cout<<"\nEnter Marks in Subject 1: ";
    cin>>msub1;
    cout<<"\nEnter Marks in Subject 2: ";
    cin>>msub2;
    cout<<"\nEnter Marks in Subject 3: ";
    cin>>msub3;
    cout<<"\nEnter Marks in Subject 4: ";
    cin>>msub4;
    cout<<"\nEnter Marks in Subject 5: ";
    cin>>msub5;
    msum = msub1+msub2+msub3+msub4+msub5;
    score = (msum/500)*100;
    cout<<"\nRoll No: "<<rollno<<"\nPercentage Score: "<<score<<"%"<<endl;
    return 0;
}
